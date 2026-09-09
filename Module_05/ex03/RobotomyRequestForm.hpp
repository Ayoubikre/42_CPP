#pragma once 

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;

    public:
        RobotomyRequestForm(std::string target="default_2");
        RobotomyRequestForm(const RobotomyRequestForm& tmp);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& tmp);
        ~RobotomyRequestForm();

        std::string ft_getTarget();

        void execute(Bureaucrat const & executor) const;
};