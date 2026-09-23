#include "ScalarConverter.hpp"

int ft_check_type(std::string t)
{
    if(t.length()==1 && !isdigit(t[0]))
        return (1);

    if(t=="-inff" || t=="+inff" || t=="inff" || t=="nanf")
        return (3);

    if(t=="-inf" || t=="+inf" || t=="inf" || t=="nan")
        return (4);
        
    if(t.length()<1)
        return (-1);

    long i=0;
    if(t[0]=='-' || t[0]=='+')
    {
        if(!isdigit(t[1]) && t[1]!='.')
            return (-1);
        i++;
    }
    while(t[i])
    {
        if(!isdigit(t[i]))
            break;
        i++;
    }
    if(!t[i])
        return (2);
    
    if(t[i++]=='.')
    {
        while(t[i])
        {
            if(!isdigit(t[i]))
                break;
            i++;
        }
        if(t[i]=='f' && t[i+1]=='\0')
            return (3);
        else if(t[i]=='\0')
            return (4);
    }
    return (-1);
}

void ft_char(std::string t)
{
    char    x1=t[0];
    int     x2= static_cast<int>(x1);
    float   x3= static_cast<float>(x1);
    double  x4= static_cast<double>(x1);

    if((0 <= x1 && x1 < 32)|| x1==127)
        ft_log("char: Non displayable");
    else
        ft_log("char: '"<< x1<<"'");
    
    ft_log("int: " << x2);
    ft_log_(std::fixed << std::setprecision(1));
    ft_log("float: " << x3 << "f");
    ft_log("double: " << x4 );
}

void ft_int(std::string t)
{
    char* tmp;
    long cr=std::strtol(t.c_str(),&tmp, 10);

    char    x1=static_cast<char>(cr);
    int     x2= static_cast<int>(cr);
    float   x3= static_cast<float>(cr);
    double  x4= static_cast<double>(cr);

    if(cr < 0 || 127 < cr)
        ft_log("char: impossible");
    else if((0 <= cr && cr < 32)|| cr==127)
        ft_log("char: Non displayable");
    else
        ft_log("char: '"<< x1<<"'");
    
    if(cr < std::numeric_limits<int>::min() || std::numeric_limits<int>::max() < cr )
        ft_log("int: impossible");
    else
        ft_log("int: " << x2);

    ft_log_(std::fixed << std::setprecision(1));
    ft_log("float: " << x3 << "f");
    ft_log("double: " << x4 );
}

void ft_float(std::string t)
{
    char *tmp;
    int f=0;

    float x3= static_cast<float>(std::strtod(t.c_str(),&tmp));

    char x1=static_cast<char>(x3);
    int x2=static_cast<int>(x3);
    double x4=static_cast<double>(x3);
    
    if(isnan(x3) || isinf(x3))
        f=1;

    if(f || x3 < 0 || 127 < x3)
        ft_log("char: impossible");
    else if((0 <= x3 && x3 < 32)|| x3==127)
        ft_log("char: Non displayable");
    else
        ft_log("char: '"<< x1<<"'");

    if(f || x3 < std::numeric_limits<int>::min() || std::numeric_limits<int>::max() < x3 )
        ft_log("int: impossible");
    else
        ft_log("int: " << x2);

    ft_log_(std::fixed );
    ft_log("float: " << x3 << "f");
    ft_log("double: " << x4 );
}

void ft_double(std::string t)
{
    char *tmp;
    int f=0;

    double x4=static_cast<double>(std::strtod(t.c_str(),&tmp));

    char x1=static_cast<char>(x4);
    int x2=static_cast<int>(x4);
    float x3= static_cast<float>(x4);
    
    if(isnan(x4) || isinf(x4))
        f=1;

    if(f || x4 < 0 || 127 < x4)
        ft_log("char: impossible");
    else if((0 <= x4 && x4 < 32)|| x4==127)
        ft_log("char: Non displayable");
    else
        ft_log("char: '"<< x1<<"'");

    if(f || x4 < std::numeric_limits<int>::min() || std::numeric_limits<int>::max() < x4 )
        ft_log("int: impossible");
    else
        ft_log("int: " << x2);

    ft_log_(std::fixed );
    ft_log("float: " << x3 << "f");
    ft_log("double: " << x4 );
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