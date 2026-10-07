#include "RPN.hpp"

int main(int ac, char** ar)
{
    if(ac!=2)
    {
        ft_log_r("Usage: ./RPN " << "9 9 + 1 -");
        return -1;
    }
    
    try
    {
        RPN rpn;
        
        ft_log( rpn.ft_calcule(ar[1]) );

    }catch(std::exception& e)
    {
        ft_log_r(e.what());
    }

    return 0;
}