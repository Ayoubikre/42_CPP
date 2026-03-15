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
        Bureaucrat(std::string name , int grade);
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

    // ft_log("Animal Default constructor called");
    // ft_log("Animal copy constructor called");
    // ft_log("Animal Copy assignment operator called");
    // ft_log("Animal Default Distructor called");
