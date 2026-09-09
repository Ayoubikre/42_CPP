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
        

AForm* Intern::C_Shrubbery(std::string T_name)
{
    return new ShrubberyCreationForm(T_name);
}

AForm* Intern::C_Robotomy(std::string T_name)
{
    return new RobotomyRequestForm(T_name);
}

AForm* Intern::C_Presidential(std::string T_name)
{
    return new PresidentialPardonForm(T_name);
}

AForm* Intern::makeForm(std::string F_name, std::string T_name)
{
    std::string t1[3]={"shrubbery creation", "robotomy request", "presidential pardon"};
    
    AForm* (Intern::*f[3])(std::string)=
    {
        &Intern::C_Shrubbery,
        &Intern::C_Robotomy,
        &Intern::C_Presidential
    };

    for(int i=0;i<3;i++)
    {
        if(F_name==t1[i])
        {
            ft_log("Intern creates " << F_name);
            return (this->*f[i])(T_name);
        }
    }
    throw InternError();
    return NULL;
}

// AForm* Intern::makeForm(std::string F_name, std::string T_name)
// {
//     if(F_name=="shrubbery creation")
//     {
//         ft_log("Intern creates " << F_name);
//         return  new ShrubberyCreationForm(T_name);
//     }
//     else if(F_name=="robotomy request")
//     {
//         ft_log("Intern creates " << F_name);
//         return  new RobotomyRequestForm(T_name);
//     }
//     else if(F_name=="presidential pardon")
//     {
//         ft_log("Intern creates " << F_name);
//         return  new PresidentialPardonForm(T_name);
//     }
//     else 
//         throw InternError();
//     return NULL;
// }