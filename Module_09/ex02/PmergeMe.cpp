#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& tmp):v(tmp.v), q(tmp.q)
{
}

PmergeMe& PmergeMe::operator=(const PmergeMe& tmp)
{
    if(this!=&tmp)
    {
        q=tmp.q;
        v=tmp.v;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
}

long long get_timestamp(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000000LL) + tv.tv_usec);
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

// std::vector<int> PmergeMe::ft_jacobsthal(std::vector<int>& m, std::vector<int>& p)
// {



// }

void PmergeMe::ft_sort_v(std::vector<int>& v)
{
    int left=0;
    std::vector< std::pair<int, int> > pairs;

    //edge cases
    if(v.size()<2)
        return ;
        
    if(v.size()%2 != 0)
        left=v[v.size()-1];

    //creat pairs
    for(int i=0; i<v.size()-1;i+=2)
        pairs.push_back(std::make_pair(v[i], v[i+1]));

    //order each pair: left, right
    for(int i=0; i<pairs.size();i++)
        if(pairs[i].first > pairs[i].second)
            std::swap(pairs[i].first, pairs[i].second);


    //     ft_log("*********");
    // for(int i=0; i<pairs.size();i++)
    // {
    //     ft_log(pairs[i].first);
    //     ft_log(pairs[i].second);
    // }

        // ft_log("------");


    // creat vectore withe bigest elent of each pair
    std::vector<int> ww;
    for(int i=0; i<pairs.size();i++)
         ww.push_back(pairs[i].second);


    // for(int i=0; i<ww.size();i++)
    //     ft_log(ww[i]);
    // ft_log("*********");
    // ft_log("");

    // recursion on that vectore "it ordeard withe Jacobsthal thingy on recursion return"
    ft_sort_v(ww);

    //craet the new sorted pair vector
    std::vector< std::pair<int, int> > s_pairs;
    for(int i=0; i<ww.size();i++)
    {
        for(int y=0; y<pairs.size();y++)
            if(ww[i] == pairs[y].second)
                s_pairs.push_back(pairs[y]);
    }


    //creat the main and panding vectore to prepar for Jacobsthal thingy
    std::vector<int> m;
    std::vector<int> p;
    for(int i=0; i<s_pairs.size();i++)
    {
       if(i==0)
       {
            m.push_back(s_pairs[i].first);
            m.push_back(s_pairs[i].second);
       }
       else{
            p.push_back(s_pairs[i].first);
            m.push_back(s_pairs[i].second);
       }
    }

    // ft_log("@@@@@@@");
    // for(int i=0; i<m.size();i++)
    // {
    //     ft_log(m[i]);
    // }
    //     ft_log("^^^^");
    // for(int i=0; i<p.size();i++)
    // {
    //     ft_log(p[i]);
    // }
    // ft_log("@@@@@@@");
    // ft_log("");


    //strtat the jakson thingy
    // v=ft_jacobsthal(m, p);
}

void PmergeMe::ft_sort_q(std::deque<int>& q)
{

}

void PmergeMe::ft_solve(char** ar)
{
    int i;

    if(!ft_parse(ar))
        throw std::runtime_error("Error: Invalude argument");
    
    ft_log_("Before : ");
    i=-1;
    while(++i < v.size())
    {
        if(i == v.size()-1)
        {
            ft_log(" " << v[i]);
            break;
        }
        ft_log_(" " << v[i] << " ");
    }

    double start_1=get_timestamp();
        ft_sort_v(v);
    double end_1=get_timestamp() - start_1;


    double start_2=get_timestamp();
        ft_sort_q(q);
    double end_2=get_timestamp() - start_2;

    ft_log_("After  : ");
    i=-1;
    while(++i < v.size())
    {
        if(i == v.size()-1)
        {
            ft_log(" " << v[i]);
            break;
        }
        ft_log_(" " << v[i] << " ");
    }

    ft_log(std::fixed << std::setprecision(5));
    ft_log("Time to process a range of "<< v.size() << " elements with a vector: " << end_1 << " us");
    ft_log("Time to process a range of "<< q.size() << " elements with a deque: " << end_2 << " us");
}
