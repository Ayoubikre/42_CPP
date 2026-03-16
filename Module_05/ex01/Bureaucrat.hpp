#pragma once

#include <iostream>
#include <exception>

#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

class Bureaucrat{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat(std::string name ="default" , int grade = 100);
        Bureaucrat(const Bureaucrat& tmp);
        Bureaucrat& operator=(const Bureaucrat& tmp);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        void ft_increase();
        void ft_Decrease();
        
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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& tmp);
