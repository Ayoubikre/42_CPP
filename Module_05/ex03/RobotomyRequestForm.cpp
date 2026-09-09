#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request",72,45), target(target)
{
    ft_log(ft_getName() << " is created ");
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& tmp) : AForm(tmp),target(tmp.target)
{
    ft_log(ft_getName()<< " is copied ");
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& tmp)
{
    if(this != &tmp)
    {
        AForm::operator=(tmp);
        this->target=tmp.target;
    }
    ft_log(this->ft_getName() << " is assigned ");
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    ft_log(this->ft_getName() << " is deleted ");
}

std::string RobotomyRequestForm::ft_getTarget()
{
    return target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(!this->ft_get_sign())
        throw FormNotSigned();
    if (executor.getGrade() > this->ft_get_exec_R())
        throw GradeTooLowException();
    {
        ft_log("zzzzzzzzzzzzzzzzz........");
        if(rand() % 2 == 0)
            ft_log(target << " has been robotomized successfully");
        else
            ft_log("robotomy of " << target <<" failed.");
    }
}
