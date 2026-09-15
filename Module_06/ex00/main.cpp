#include "ScalarConverter.hpp"

int main(int ac, char** ar)
{
    if(ac!=2)
    {
        ft_log("Usage: ./convert <var>");
        ft_log("Examples:");
        ft_log("\t./convert 0");
        ft_log("\t./convert 42.0f");
        return -1;
    }
    ScalarConverter::convert(ar[1]);
    return 0;
}