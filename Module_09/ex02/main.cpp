#include "PmergeMe.hpp"

int main(int ac, char** ar)
{
    if(ac<2)
    {
        ft_log("Usage: ./PmergeMe " << "9 2 1 4");
        return -1;
    }
    
    try
    {
        PmergeMe pm;
        
        pm.ft_solve(ar);

    }catch(std::exception& e)
    {
        ft_log_r(e.what());
    }

    return 0;
}