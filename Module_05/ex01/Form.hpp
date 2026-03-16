#pragma once

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool sign;
        const int grade_to_signe;
        const int grade_to_execute;

    public:
        Form(std::string name ="default" , const int grade_to_signe = 100, const int grade_to_execute = 10);
        Form(const Form& tmp);
        Form& operator=(const Form& tmp);
        ~Form();

        std::string getName() const;
        bool get_sign() const;
        const int getGrade_sg() const;
        const int getGrade_ex() const;

        void beSigned(const Bureaucrat& tmp);
        void signForm();
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw(); 
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw(); 
        };
};

std::ostream& operator<<(std::ostream& out, const Form& tmp);
