#include "main.hpp"

Cure::Cure():AMateria("cure")
{
    ft_log("Cure Default constructor called");
}

Cure::Cure(const Cure& tmp):AMateria(tmp)
{
    ft_log("Cure copy constructor called");
}

Cure& Cure::operator=(const Cure& tmp)
{
    ft_log("Cure Copy assignment operator called");
    if(this != &tmp)
    {
        AMateria::operator=(tmp);
    }
    return *this;
}

Cure::~Cure()
{
    ft_log("Cure Default Distructor called");
}


AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    ft_log("* heals "<< target.getName() <<"’s wounds *");
}
