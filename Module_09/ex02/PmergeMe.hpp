#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <iomanip>
#include <vector>
#include <deque>
#include <utility>
#include <sys/time.h>
#include <cstdlib>

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
        void ft_sort_q(std::deque<int>& q);
        void ft_sort_v(std::vector<int>& v);
        // std::vector<int> ft_jacobsthal(std::vector<int>& m, std::vector<int>& p);
};
