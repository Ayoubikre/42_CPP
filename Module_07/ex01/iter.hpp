#pragma once 

#include <iostream>
#include <string>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x <<std::endl

template <typename X>
void iter(X* t, const size_t len, void (*f)(X))
{
    ft_log(len);
    for(int i=0;i<len;i++)
        f(t[i]);
}
