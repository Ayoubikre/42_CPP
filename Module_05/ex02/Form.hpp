#pragma once 

#include <iostream>
#include <string>
#include <exception>
#include <ostream>


#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

class Bureaucrat;
class Form{
    private:
        const std::string name;
        bool is_signed;
        const int required_sign;
        const int required_exec;

    public:
        Form(const std::string& name="default", const int required_sign=50, const int required_exec=10);
        Form(const Form& tmp);
        Form& operator=(const Form& tmp);
        ~Form();

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

        const std::string ft_getName() const;
        bool ft_get_sign() const;
        int ft_get_sign_R() const;
        int ft_get_sign_E() const;

        void beSigned(const Bureaucrat& tmp);
};

std::ostream& operator<<(std::ostream& out, const Form& tmp);
