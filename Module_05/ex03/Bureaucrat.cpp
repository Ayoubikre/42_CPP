#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
    return("Bureaucrat grade is hight");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Bureaucrat grade is low");
}

std::ostream& operator<<(std::ostream& out,const Bureaucrat& tmp)
{
    out << tmp.getName() << ", bureaucrat grade " <<tmp.getGrade() << "." ;
    return out;
}


void Bureaucrat::signForm(AForm& tmp)
{
    try{
        tmp.beSigned(*this);
        ft_log(this->name << " signed " <<  tmp.ft_getName());
    }
    catch(AForm::GradeTooLowException& e)
    {
        ft_log(this->name << " couldnt sign " <<  tmp.ft_getName() << " because " << e.what());
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try{
        form.execute(*this);
        ft_log(this->name << " executed " <<  form.ft_getName());
    }
    catch(AForm::FormNotSigned& e){
        ft_log(this->name << " couldnt excutes " <<  form.ft_getName() << " because " << e.what());
    }
    catch(AForm::GradeTooLowException& e){
        ft_log(this->name << " couldnt excutes " <<  form.ft_getName() << " because " << e.what());
    }
}
