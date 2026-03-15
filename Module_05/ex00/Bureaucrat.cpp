#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name , int grade): name(name), grade(grade)
{
    ft_log("Bureaucrat Default constructor called");
    if(grade < 1)
        throw(GradeTooHighException());
    if(grade > 150)
        throw(GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat& tmp):name(tmp.name), grade(tmp.grade)
{
    ft_log("Bureaucrat copy constructor called");
    if(grade < 1)
        throw(GradeTooHighException());
    if(grade > 150)
        throw(GradeTooLowException());
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& tmp)
{
    ft_log("Bureaucrat Copy assignment operator called");
    if(this != &tmp)
    {
        this->grade=tmp.grade;
        if(this->grade < 1)
            throw(GradeTooHighException());
        if(this->grade > 150)
            throw(GradeTooLowException());
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    ft_log("Bureaucrat Default Distructor called");
}


int Bureaucrat::getGrade() const
{
    return grade;
}

std::string Bureaucrat::getName() const
{
    return name;
}

void Bureaucrat::ft_increase()
{
    if(grade <= 1)
        throw(GradeTooHighException());
    grade--;
}

void Bureaucrat::ft_Decrease()
{
    if(grade >= 150)
        throw(GradeTooLowException());
    grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

