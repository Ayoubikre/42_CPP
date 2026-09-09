#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation",145,137), target(target)
{
    ft_log(ft_getName() << " is created ");
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& tmp) : AForm(tmp),target(tmp.target)
{
    ft_log(ft_getName()<< " is copied ");
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& tmp)
{
    if(this != &tmp)
    {
        AForm::operator=(tmp);
        this->target=tmp.target;
    }
    ft_log(this->ft_getName() << " is assigned ");
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    ft_log(this->ft_getName() << " is deleted ");
}

std::string ShrubberyCreationForm::ft_getTarget()
{
    return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(!this->ft_get_sign())
        throw FormNotSigned();
    if (executor.getGrade() > this->ft_get_exec_R())
        throw GradeTooLowException();
    {
        std::string fn=target+"_shrubbery";

        std::ofstream out_f(fn.c_str());
        if(out_f.is_open())
        {
            out_f << "       *" << std::endl;
            out_f << "      ***" << std::endl;
            out_f << "     *****" << std::endl;
            out_f << "    *******" << std::endl;
            out_f << "   *********" << std::endl;
            out_f << "      |||" << std::endl;
            out_f << "      |||" << std::endl;

            out_f.close();
        }
        else
            ft_log("Errore file stream");
    }
}
