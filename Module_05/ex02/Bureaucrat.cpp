#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade):name(name),grade(grade)
{
    if(grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();

    ft_log(name << " is created");
}


Bureaucrat::Bureaucrat(const Bureaucrat& tmp) :name(tmp.name), grade(tmp.grade)
{
    ft_log(name << " is copied");
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& tmp)
{
    if( this != &tmp)
    {
        this->grade=tmp.grade;
    }
    ft_log(name << " is assigned");
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    ft_log(name << " is deleted");
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::ft_increment()
{
    if(this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::ft_decrement()
{
    if(this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return("grade is hight");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return("grade is low");
}

std::ostream& operator<<(std::ostream& out,const Bureaucrat& tmp)
{
    out << tmp.getName() << ", bureaucrat grade " <<tmp.getGrade() << "." ;
    return out;
}


void Bureaucrat::signForm(Form& tmp)
{
    try{
        tmp.beSigned(*this);
        ft_log(this->name << " signed " <<  tmp.ft_getName());
    }
    catch(Form::GradeTooLowException& e)
    {
        ft_log(this->name << " couldn’t sign " <<  tmp.ft_getName() << " because " << e.what());
    }
}
