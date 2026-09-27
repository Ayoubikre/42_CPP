#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <cctype>


#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl
#define ft_log_r(x) std::cerr << x << std::endl

class RPN
{
    private:
        std::stack<long> t;
    
    private:
        int ft_validate(std::string tmp);

    public:
        RPN();
        RPN(const RPN& tmp);
        RPN& operator=(const RPN& tmp);
        ~RPN();

        long ft_calcule(std::string str);
};