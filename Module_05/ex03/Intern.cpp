#include "Intern.hpp"

Intern::Intern()
{
    ft_log("Intern is created");
}

Intern::Intern(const Intern& tmp)
{
    (void)tmp;
    ft_log("Intern is copied");
}

Intern& Intern::operator=(const Intern& tmp)
{
    if(this !=&tmp){}
    ft_log("Intern is assignd");
    return *this;
}

Intern::~Intern()
{
    ft_log("Intern is deleted");
}

const char* Intern::InternError::what() const throw()
{
    return("Form name is not found");
}
        
AForm* Intern::makeForm(std::string F_name, std::string T_name)
{
    if(F_name=="shrubbery creation")
    {
        ft_log("Intern creates " << F_name);
        return  new ShrubberyCreationForm(T_name);
    }
    else if(F_name=="robotomy request")
    {
        ft_log("Intern creates " << F_name);
        return  new RobotomyRequestForm(T_name);
    }
    else if(F_name=="presidential pardon")
    {
        ft_log("Intern creates " << F_name);
        return  new PresidentialPardonForm(T_name);
    }
    else 
        throw InternError();
    return NULL;
}

// AForm* Intern::makeForm(std::string F_name, std::string T_name)
// {

// }