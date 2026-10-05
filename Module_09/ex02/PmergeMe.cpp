#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& tmp):v(tmp.v), q(tmp.q) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& tmp)
{
    if(this!=&tmp)
    {
        q=tmp.q;
        v=tmp.v;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

long long get_timestamp(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000000LL) + tv.tv_usec);
}

void PmergeMe::ft_print(std::vector<int> v)
{
    int i = -1;

    while(++i < (int)v.size())
    {
        if(i == (int)v.size()-1)
        {
            ft_log(" " << v[i]);
            break;
        }
        ft_log_(" " << v[i] << " ");
    }
}

int PmergeMe::ft_parse(char** ar)
{
    std::string tmp;

    for(int i=1; ar[i];i++)
    {
        tmp=ar[i];
        if (tmp.find_first_not_of("0123456789") != std::string::npos)
            return 0;

        v.push_back(std::atoi(ar[i]));
        q.push_back(std::atoi(ar[i]));
    }
    
    return 1;
}



void PmergeMe::ft_sort_v(std::vector<int>& v)
{
    int left= -1;
    std::vector< std::pair<int, int> > pairs;
    std::vector<int> ww;

    //edge cases
    if(v.size()<2)
        return ;
        
    if(v.size()%2 != 0)
        left=v[v.size()-1];


    //creat pairs, and the big elements 'ww' array
    for(int i=0; i<(int)v.size()-1;i+=2)
    {
        if(v[i] > v[i+1])
            std::swap(v[i], v[i+1]);
        pairs.push_back(std::make_pair(v[i], v[i+1]));
        ww.push_back(v[i+1]);
    }

    // recursion
    ft_sort_v(ww);


    //creat the main and panding vectore to prepar for Jacobsthal 
    std::vector<int> m;
    std::vector<int> p;

    for(int i=0; i<(int)ww.size();i++)
    {
        for(int y=0; y<(int)pairs.size();y++)
        {
            if(ww[i] == pairs[y].second)
            {
                p.push_back(pairs[y].first);
                m.push_back(pairs[y].second);

                pairs[y].second = -1; 

                break; 
            }
        }
    }

    //Jacobsthal :
    int jacob_2=1;
    int jacob_1=1;
    int count=0;

    if (!p.empty())
    {
        m.insert(m.begin(), p[0]);
        count++;
    }
    
    while(1)
    {
        int jc = jacob_1 + jacob_2 * 2;

        if(jacob_1>=(int)p.size())
            break;

        int s = jc-1;
        if(s>=(int)p.size())
            s=p.size()-1;

        while(s > jacob_1 - 1)
        {
            std::vector<int>::iterator itr= std::lower_bound(m.begin(), m.begin() + s + count + 1 , p[s]);

            m.insert(itr, p[s]);

            s--; count++;
        }

        jacob_2=jacob_1;  jacob_1=jc;
    }

    if(left!=-1)
    {
        std::vector<int>::iterator itr = std::lower_bound(m.begin(), m.end(), left);
        m.insert(itr, left);
    }

    v=m;
}

void PmergeMe::ft_solve(char** ar)
{
    if(!ft_parse(ar))
        throw std::runtime_error("Error: Invalude argument");
    

    ft_log_("Before : "); ft_print(v);

        double start_1=get_timestamp();
            ft_sort_v(v);
        double end_1=get_timestamp() - start_1;


        // double start_2=get_timestamp();
        //     ft_sort_q(q);
        // double end_2=get_timestamp() - start_2;

    ft_log_("After  : "); ft_print(v);


    ft_log(std::fixed << std::setprecision(5));
    ft_log("Time to process a range of "<< v.size() << " elements with a vector: " << end_1 << " us");
    // ft_log("Time to process a range of "<< q.size() << " elements with a deque: " << end_2 << " us");
}
