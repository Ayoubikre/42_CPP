#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <ctime>
#include <cstdlib>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x << std::endl

class Base{
    public:
        virtual ~Base() {};
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);