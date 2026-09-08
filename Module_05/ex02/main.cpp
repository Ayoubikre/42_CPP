#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("ay", 10);

        Form f1("f1", 20, 3);
        Form f2("f2", 10, 3);
        Form f3("f3", 5, 3);
        // Form f4("f3", -10, 3);
        // Form f5("f3", 5, 900);

        a.signForm(f1);
        a.signForm(f2);
        a.signForm(f3);
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        ft_log("Error 1 :" << e.what());
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        ft_log("Error 2 :" << e.what());
    }
    catch(Form::GradeTooHighException& e)
    {
        ft_log("Error 3 :" << e.what());
    }
    catch(Form::GradeTooLowException& e)
    {
        ft_log("Error 4 :" << e.what());
    }
    catch(std::exception& e)
    {
        ft_log("Error G :" << e.what());
    }
}