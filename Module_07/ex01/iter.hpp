#pragma once 

#include <iostream>
#include <string>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x <<std::endl

template<typename X>
void ft_pr(X a)
{
    ft_log("print -> " << a);
}

template <typename X, typename func>
void iter(X* t, const size_t len, func f)
{
    for(int i=0;i<len;i++)
        f(t[i]);
}
