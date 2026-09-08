#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("ay", 10);
        // Bureaucrat a("ay", -10);
        // Bureaucrat a("ay", 1000);
        ft_log(a);
        a.ft_decrement();
        ft_log(a);
        a.ft_increment();
        ft_log(a);
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        ft_log("Error 1 :" << e.what());
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        ft_log("Error 2 :" << e.what());
    }
    catch(std::exception& e)
    {
        ft_log("Error G :" << e.what());
    }
}