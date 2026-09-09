#pragma once 

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;

    public:
        PresidentialPardonForm(std::string target="default_3");
        PresidentialPardonForm(const PresidentialPardonForm& tmp);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& tmp);
        ~PresidentialPardonForm();

        std::string ft_getTarget();

        void execute(Bureaucrat const & executor) const;
};
