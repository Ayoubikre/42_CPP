#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("ay", 10);
        // Bureaucrat a("rr", -10);
        // Bureaucrat a("rr", 1000);

        ft_log(a);
    }
    catch(std::exception& e)
    {
        ft_log("Error: " << e.what());
    }
}
