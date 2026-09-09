#pragma once 

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm(std::string target="default_1");
        ShrubberyCreationForm(const ShrubberyCreationForm& tmp);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& tmp);
        ~ShrubberyCreationForm();

        std::string ft_getTarget();

        void execute(Bureaucrat const & executor) const;
};