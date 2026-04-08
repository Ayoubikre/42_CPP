#include "main.hpp"

Ice::Ice():AMateria("ice")
{
    ft_log("Ice Default constructor called");
}

Ice::Ice(const Ice& tmp):AMateria(tmp)
{
    ft_log("Ice copy constructor called");
}

Ice& Ice::operator=(const Ice& tmp)
{
    ft_log("Ice Copy assignment operator called");
    if(this != &tmp)
    {
        AMateria::operator=(tmp);
    }
    return *this;
}

Ice::~Ice()
{
    ft_log("Ice Default Distructor called");
}


AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    ft_log("* shoots an ice bolt at " << target.getName() << " *");
}
