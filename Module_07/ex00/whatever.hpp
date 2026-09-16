#pragma once

#include <iostream>
#include <string>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x <<std::endl

template <typename X>
void swap(X& a, X& b)
{
    X tmp = a;
    a = b;
    b = tmp;
}

template <typename X>
X min(X& a, X& b)
{
    if (a < b)
        return a;
    return b;
}

template <typename X>
X max(X& a, X& b)
{
    if (a > b)
        return a;
    return b;
}