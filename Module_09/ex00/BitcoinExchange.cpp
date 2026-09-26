#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& tmp): csv(tmp.csv) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& tmp)
{
    if(this!=&tmp)
        csv=tmp.csv;

    return *this;
}

BitcoinExchange::~BitcoinExchange() {}


std::string trim(const std::string& str)
{
    size_t first = str.find_first_not_of(" \t\n\r\f\v");
    if (first == std::string::npos)
            return "" ;

    size_t last = str.find_last_not_of(" \t\n\r\f\v");

    return str.substr(first, (last - first + 1));
}


int ft_check_1(std::string tmp)
{
    return 0;
}

int ft_check_2(std::string tmp)
{
    return 0;
}

void BitcoinExchange::ft_print()
{
    std::cout << std::setprecision(2) << std::fixed;
    for(std::map<std::string, float>::iterator it= csv.begin(); it != csv.end(); it++)
    {
        ft_log(it->first << " -> " << it->second);
    }
}
void BitcoinExchange::ft_load_csv()
{
    size_t n;
    std::string tmp;
    char *tmp2;
    std::ifstream in_f("data.csv");

    if(!in_f)
        throw std::out_of_range("ER : 1");
    
    std::getline(in_f,tmp);
    while(std::getline(in_f,tmp))
    {
        if(tmp.empty())
            continue;
        n=tmp.find(",");
        if (n != std::string::npos)
            csv[trim(tmp.substr(0,n))]= static_cast<float>(std::strtod(tmp.substr(n+1).c_str(),&tmp2)) ;
    }



    in_f.close();
}

void BitcoinExchange::ft_load_data(std::string ar)
{
    int n;
    std::string tmp;
    std::ifstream in_f(ar);

    if(!in_f)
        throw std::out_of_range("ER : 1");
    
    {
        std::getline(in_f,tmp);
        n=tmp.find("|");
        if(!(trim(tmp.substr(0,n))=="date") || !(trim(tmp.substr(n+1))=="value"))
            throw std::out_of_range("ER : 2");    
    }

    while(std::getline(in_f,tmp))
    {
        n=tmp.find("|");
        if( ft_check_1(trim(tmp.substr(0,n)))  || ft_check_2(trim(tmp.substr(n+1))) )
            throw std::out_of_range("ER : 3");
        
        ft_log(tmp);
        ft_log("---------");
    }

    in_f.close();
}
