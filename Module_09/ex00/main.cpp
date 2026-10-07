#include "BitcoinExchange.hpp"

int main(int ac, char** ar)
{
    if(ac!=2)
    {
        ft_log_r("Usage: ./btc input.txt ");
        return -1;
    }
    
    try
    {
        BitcoinExchange Bitcoin;

        Bitcoin.ft_load_csv();
        Bitcoin.ft_load_data(ar[1]);

    }catch(std::exception& e)
    {
        ft_log_r(e.what());
    }

    return 0;
}