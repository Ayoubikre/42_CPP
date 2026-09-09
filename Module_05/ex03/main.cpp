#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>


int main()
{
    srand(time(NULL));
    try
    {
        Bureaucrat a("ay", 50);
        // Bureaucrat a("ay", 1);

        Intern someRandomIntern;
        AForm* f;
        f = someRandomIntern.makeForm("robotomy request", "Bender");
        if(!f)
            return 0;
        a.signForm(*f);
        a.executeForm(*f);
        delete(f);
    }
    catch(Intern::InternError& e)
    {
        ft_log("Error 0 :" << e.what());
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        ft_log("Error 1 :" << e.what());
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        ft_log("Error 2 :" << e.what());
    }
    catch(AForm::GradeTooHighException& e)
    {
        ft_log("Error 3 :" << e.what());
    }
    catch(AForm::GradeTooLowException& e)
    {
        ft_log("Error 4 :" << e.what());
    }
    catch(std::exception& e)
    {
        ft_log("Error G :" << e.what());
    }
}