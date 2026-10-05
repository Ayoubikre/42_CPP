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

int PmergeMe::ft_parse(char** ar)
{
    std::string tmp;

    for(int i=1; ar[i];i++)
    {
        tmp=ar[i];

        if(tmp.empty())
            return 0;

        if (tmp.find_first_not_of("0123456789") != std::string::npos)
            return 0;

        if(std::atol(ar[i]) > std::numeric_limits<int>::max())
            return 0;

        v.push_back(std::atoi(ar[i]));
        q.push_back(std::atoi(ar[i]));
    }
    
    return 1;
}

void PmergeMe::ft_solve(char** ar)
{
    if(!ft_parse(ar))
        throw std::runtime_error("Error: Invalude argument");
    

    ft_log_("Before : "); ft_print(v);

        double start_1=get_timestamp();
            ft_sort < std::vector<int> , std::vector< std::pair<int,int> > >(v);
        double end_1=get_timestamp() - start_1;


        double start_2=get_timestamp();
            ft_sort < std::deque<int> , std::deque< std::pair<int,int> > >(q);
        double end_2=get_timestamp() - start_2;

    ft_log_("After  : "); ft_print(v);


    ft_log_(std::fixed << std::setprecision(5));
    ft_log("Time to process a range of "<< v.size() << " elements with a vector: " << end_1 << " us");
    ft_log("Time to process a range of "<< q.size() << " elements with a deque: " << end_2 << " us");
}
