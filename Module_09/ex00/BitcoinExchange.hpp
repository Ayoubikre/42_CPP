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
#include <iomanip>


#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

class BitcoinExchange
{
    private:
        std::map<std::string, float> csv;
    
    private:
        int ft_is_number(std::string tmp);
        int ft_check_date(std::string tmp);
        int ft_check_value(std::string tmp);
        int ft_calcul(std::string date, std::string value);
        std::string ft_split(std::string tmp, int x, char c);
        std::string ft_trim(const std::string& str);

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& tmp);
        BitcoinExchange& operator=(const BitcoinExchange& tmp);
        ~BitcoinExchange();

        void ft_load_csv();
        void ft_load_data(std::string ar);

};