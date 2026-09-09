#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, const int required_sign, const int required_exec) :name(name),is_signed(false),required_sign(required_sign),required_exec(required_exec)
{
    if(required_sign < 1 || required_exec < 1)
        throw GradeTooHighException();
    if(required_sign > 150 || required_exec > 150)
        throw GradeTooLowException();
    ft_log(name << " is created or");
}

AForm::AForm(const AForm& tmp):name(tmp.name),is_signed(tmp.is_signed),required_sign(tmp.required_sign),required_exec(tmp.required_exec)
{
    ft_log(name << " is copied or");
}

AForm& AForm::operator=(const AForm& tmp)
{
    if(this != &tmp)
    {
        this->is_signed=tmp.is_signed;
    }
    ft_log(name << " is assigned or");
    return *this;
}

AForm::~AForm()
{
    ft_log(name << " is deleted or");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return("grade is low");
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return("grade is hight");
}

const char* AForm::FormNotSigned::what() const throw()
{
    return("Form is not signed");
}

const std::string AForm::ft_getName() const
{
    return name;
}

bool AForm::ft_get_sign() const
{
    return is_signed;
}

int AForm::ft_get_sign_R() const
{
    return required_sign;
}

int AForm::ft_get_exec_R() const
{
    return required_exec;
}

void AForm::beSigned(const Bureaucrat& tmp)
{
    if(tmp.getGrade() <= required_sign)
        is_signed=true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out , const AForm& tmp)
{
    out << "Aform info : " <<  std::endl
        << "name : " << tmp.ft_getName() << std::endl
        << "status : " << tmp.ft_get_sign() << std::endl
        << "required_sign : " << tmp.ft_get_sign_R() << std::endl
        << "required_exec : " << tmp.ft_get_exec_R() << std::endl;

    return out;
}