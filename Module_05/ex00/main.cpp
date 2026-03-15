#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a1("rr", 10);
        Bureaucrat a2("rr", -10);
        Bureaucrat a3("rr", 1000);
    }
    catch(std::exception& e)
    {
        ft_log("Error: " << e.what());
    }
}