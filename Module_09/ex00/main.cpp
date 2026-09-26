#include "BitcoinExchange.hpp"

int main(int ac, char** ar)
{
    if(ac!=2)
    {
        ft_log("Error: could not open file.");
        return -1;
    }
    
    try
    {
        BitcoinExchange Bitcoin;

        Bitcoin.ft_load_csv();
        // Bitcoin.ft_load_data(ar[1]);
        Bitcoin.ft_print();


    }catch(std::exception& e)
    {
        ft_log(e.what());
    }

    return 0;
}