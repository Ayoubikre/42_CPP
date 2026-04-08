#include "main.hpp"

WrongAnimal::WrongAnimal(std::string name):type(name)
{
    ft_log("WrongAnimal Default constructor called");
}

WrongAnimal::WrongAnimal(const WrongAnimal& tmp):type(tmp.type)
{
    ft_log("WrongAnimal copy constructor called");
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& tmp)
{
    ft_log("WrongAnimal Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    ft_log("WrongAnimal Default Distructor called");
}

void WrongAnimal::makeSound() const
{
    ft_log("S............W_A..............S");
}

const std::string WrongAnimal::getType() const 
{ 
    return type; 
}
