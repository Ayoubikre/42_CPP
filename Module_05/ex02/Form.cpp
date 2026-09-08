#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, const int required_sign, const int required_exec) :name(name),is_signed(false),required_sign(required_sign),required_exec(required_exec)
{
    if(required_sign < 1 || required_exec < 1)
        throw GradeTooHighException();
    if(required_sign > 150 || required_exec > 150)
        throw GradeTooLowException();
    ft_log(name << " is created");
}

Form::Form(const Form& tmp):name(tmp.name),is_signed(tmp.is_signed),required_sign(tmp.required_sign),required_exec(tmp.required_exec)
{
    ft_log(name << " is copied");
}

Form& Form::operator=(const Form& tmp)
{
    if(this != &tmp)
    {
        this->is_signed=tmp.is_signed;
    }
    ft_log(name << " is assigned");
    return *this;
}

Form::~Form()
{
    // ft_log(name << " is deleted");

}

const char* Form::GradeTooLowException::what() const throw()
{
    return("grade is low");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return("grade is hight");
}

const std::string Form::ft_getName() const
{
    return name;
}

bool Form::ft_get_sign() const
{
    return is_signed;
}

int Form::ft_get_sign_R() const
{
    return required_sign;
}

int Form::ft_get_sign_E() const
{
    return required_exec;
}

void Form::beSigned(const Bureaucrat& tmp)
{
    if(tmp.getGrade() <= required_sign)
        is_signed=true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out , const Form& tmp)
{
    out << "form info : " <<  std::endl
        << "name : " << tmp.ft_getName() << std::endl
        << "status : " << tmp.ft_get_sign() << std::endl
        << "required_sign : " << tmp.ft_get_sign_R() << std::endl
        << "required_exec : " << tmp.ft_get_sign_E() << std::endl;

    return out;
}