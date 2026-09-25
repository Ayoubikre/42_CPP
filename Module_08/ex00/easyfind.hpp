#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x <<std::endl

template<typename X>
typename X::iterator easyfind(X& t, int n)
{
    typename X::iterator itr=std::find(t.begin(), t.end(), n);

    if(itr==t.end())
        throw std::out_of_range("Number not found") ;

    return itr;
}