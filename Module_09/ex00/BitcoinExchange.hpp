#pragma once

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <fstream>
#include <exception>
#include <stdexcept>
#include <cstdlib>
#include <limits>


#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

class BitcoinExchange
{
    private:
        std::map<std::string, float> csv;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& tmp);
        BitcoinExchange& operator=(const BitcoinExchange& tmp);
        ~BitcoinExchange();

        void ft_load_csv();
        void ft_load_data(std::string ar);
        void ft_print();

};