#include "main.hpp"

AMateria::AMateria(std::string const & type):type(type)
{
    ft_log("AMateria Default constructor called");
}

AMateria::AMateria(const AMateria& tmp):type(tmp.type)
{
    ft_log("AMateria copy constructor called");
}

AMateria& AMateria::operator=(const AMateria& tmp)
{
    ft_log("AMateria Copy assignment operator called");
    if(this != &tmp)
    {
    }
    return *this;
}

AMateria::~AMateria()
{
    ft_log("AMateria Default Distructor called");
}


std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    ft_log("Nothing to be done here" << target.getName());
}
