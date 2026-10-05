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

        template<typename X_CONT, typename X_PAIR>
        void ft_sort(X_CONT& v);

        template<typename X_CONT>
        void ft_print(X_CONT& v);
};



template<typename X_CONT, typename X_PAIR>
void PmergeMe::ft_sort(X_CONT& v)
{
    int left= -1;
    X_PAIR pairs;
    X_CONT ww;

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
    ft_sort<X_CONT,X_PAIR> (ww);


    //creat the main and panding vectore to prepar for Jacobsthal 
    X_CONT m;
    X_CONT p;

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
            typename X_CONT::iterator itr= std::lower_bound(m.begin(), m.begin() + s + count + 1 , p[s]);

            m.insert(itr, p[s]);

            s--; count++;
        }

        jacob_2=jacob_1;  jacob_1=jc;
    }

    if(left!=-1)
    {
        typename X_CONT::iterator itr = std::lower_bound(m.begin(), m.end(), left);
        m.insert(itr, left);
    }

    v=m;
}


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
