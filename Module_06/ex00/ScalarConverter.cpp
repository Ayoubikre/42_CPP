#include "ScalarConverter.hpp"


int ft_check_type(std::string t)
{
    if(t.length()==1 && !isdigit(t[0]))
        return 1;
    
    
    
    return 2;
}

void ft_char(std::string t)
{
    char    x1=t[0];
    int     x2= static_cast<int>(x1);
    float   x3= static_cast<float>(x1);
    double  x4= static_cast<double>(x1);

    if((0 <= x1 && x1 <= 32)|| x1==127)
        ft_log("char: Non displayable");
    else
        ft_log("char: "<< x1);
    
    ft_log("int: " << x2);
    ft_log("float: " << x3 << "f");
    ft_log("double: " << x4 );
}

void ft_int(std::string t)
{
    char *tmp;
    // int x2= std::strtol(t.c_str(),tmp,10);
    float x2= std::strtod(t.c_str(),&tmp);
    // double x2= std::strtod(t.c_str(),&tmp);

    ft_log(x2);
    ft_log(*tmp);
}

void ft_float(std::string t)
{
    ft_log("it a float");
}

void ft_double(std::string t)
{
    ft_log("it a double");
}

void ft_errors(int n)
{
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
            // ft_errors(n);
            ft_log("Error: the type is not supported");
            break;
    }
}