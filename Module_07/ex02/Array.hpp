#pragma once

#include <iostream>
#include <string>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x <<std::endl

template<typename X>
class Array {
    private:
        X *t;
        unsigned int s1;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& tmp);
        Array& operatore=(const Array& tmp);
        ~Array()
};







#include "Array.tpp"