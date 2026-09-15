#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x <<std::endl

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& tmp);
        ScalarConverter& operator=(const ScalarConverter& tmp);
        ~ScalarConverter();

    public:
        static void convert(std::string t);
};