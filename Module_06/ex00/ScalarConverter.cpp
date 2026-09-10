#include "ScalarConverter.hpp"


int ft_check_type(std::string t)
{
    if(t.length()==1 && !isdigit(t[0]))
        return 1;
    
    
    
    return 0;
}

void ft_char(std::string t)
{
    ft_log("it a char");
}

void ft_int(std::string t)
{
    ft_log("it a int");
}

void ft_float(std::string t)
{
    ft_log("it a float");
}

void ft_double(std::string t)
{
    ft_log("it a double");
}

void ScalarConverter::convert(std::string t)
{
    int n=ft_check_type(t);

    switch(n){
        case 1:
            ft_char(t);
            break;
        case 2:
            ft_int(t);
            break;
        case 3:
            ft_float(t);
            break;
        case 4:
            ft_double(t);
            break;
        default:
            ft_log("Error: the type is not supported");
            break;
    }
}