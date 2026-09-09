#pragma once 

#include <iostream>
#include <string>
#include <exception>
#include <ostream>


#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

class Bureaucrat;
class AForm{
    private:
        const std::string name;
        bool is_signed;
        const int required_sign;
        const int required_exec;

    public:
        AForm(const std::string& name="default", const int required_sign=50, const int required_exec=10);
        AForm(const AForm& tmp);
        AForm& operator=(const AForm& tmp);
        virtual ~AForm();

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class FormNotSigned : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        const std::string ft_getName() const;
        bool ft_get_sign() const;
        int ft_get_sign_R() const;
        int ft_get_exec_R() const;

        void beSigned(const Bureaucrat& tmp);

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& tmp);
