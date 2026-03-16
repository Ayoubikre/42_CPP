#include "Form.hpp"

Form::Form(std::string name, const int grade_to_signe, const int grade_to_execute):name(name),sign(0),grade_to_signe(grade_to_signe),grade_to_execute(grade_to_execute)
{
    if(grade_to_signe < 1)
        throw(GradeTooHighException());
    if(grade_to_signe > 150)
        throw(GradeTooLowException()); 
}

Form::Form(const Form& tmp):name(tmp.name),sign(tmp.sign),grade_to_signe(tmp.grade_to_signe),grade_to_execute(tmp.grade_to_execute)
{
}

Form& Form::operator=(const Form& tmp)
{
    if(this!= &tmp)
    {
        this->sign=tmp.sign;
    }
    return *this;
}

Form::~Form()
{
}


std::string Form::getName() const
{
    return name;
}

bool Form::get_sign() const
{
    return sign;
}

const int Form::getGrade_sg() const
{
    return grade_to_signe;
}

const int Form::getGrade_ex() const
{
    return grade_to_execute;
}

const char* Form::GradeTooHighException::what()  const throw()
{
    return "Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}


std::ostream& operator<<(std::ostream& out, const Form& tmp)
{
    // out << 
    return out;
}
