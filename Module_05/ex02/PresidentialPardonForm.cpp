#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon",25,5), target(target)
{
    ft_log(ft_getName() << " is created ");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& tmp) : AForm(tmp),target(tmp.target)
{
    ft_log(ft_getName()<< " is copied ");
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& tmp)
{
    if(this != &tmp)
    {
        AForm::operator=(tmp);
        this->target=tmp.target;
    }
    ft_log(this->ft_getName() << " is assigned ");
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    ft_log(this->ft_getName() << " is deleted ");
}

std::string PresidentialPardonForm::ft_getTarget()
{
    return target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(!this->ft_get_sign())
        throw FormNotSigned();
    if (executor.getGrade() > this->ft_get_exec_R())
        throw GradeTooLowException();
    {
        ft_log(target << " has been pardoned by Zaphod Beeblebrox.");
    }
}
