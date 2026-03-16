#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name , int grade): name(name), grade(grade)
{
    if(grade < 1)
        throw(GradeTooHighException());
    if(grade > 150)
        throw(GradeTooLowException()); 
}

Bureaucrat::Bureaucrat(const Bureaucrat& tmp):name(tmp.name), grade(tmp.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& tmp)
{
    if(this != &tmp)
    {
        this->grade=tmp.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
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

const char* Bureaucrat::GradeTooHighException::what()  const throw()
{
    return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& tmp)
{
    out << tmp.getName() << " , bureaucrat grade " << tmp.getGrade();
    return out;
}
