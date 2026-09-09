#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        AForm* C_Shrubbery(std::string T_name);
        AForm* C_Robotomy(std::string T_name);
        AForm* C_Presidential(std::string T_name);


    public:
        Intern();
        Intern(const Intern& tmp);
        Intern& operator=(const Intern& tmp);
        ~Intern();

        class InternError : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };        

        AForm* makeForm(std::string F_name, std::string T_name);
};