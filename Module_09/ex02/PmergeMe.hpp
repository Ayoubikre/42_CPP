#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <iomanip>
#include <vector>
#include <deque>
#include <utility>
#include <sys/time.h>
#include <cstdlib>
#include <limits>

#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl
#define ft_log_r(x) std::cerr << x << std::endl

class PmergeMe
{
    private:
        std::vector<int> v;
        std::deque<int> q;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe& tmp);
        PmergeMe& operator=(const PmergeMe& tmp);
        ~PmergeMe();

        int  ft_parse(char** ar);
        void ft_solve(char** ar);

        void ft_sort_v(std::vector<int>& v);
        void ft_sort_q(std::deque<int>& v);

        template<typename X_CONT>
        void ft_print(X_CONT& v);
};


template<typename X_CONT>
void PmergeMe::ft_print(X_CONT& v)
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
