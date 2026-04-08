#include "main.hpp"

Animal::Animal(std::string name):type(name)
{
    ft_log("Animal Default constructor called");
}

Animal::Animal(const Animal& tmp):type(tmp.type)
{
    ft_log("Animal copy constructor called");
}

Animal& Animal::operator=(const Animal& tmp)
{
    ft_log("Animal Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
    }
    return *this;
}

Animal::~Animal()
{
    ft_log("Animal Default Distructor called");
}

const std::string Animal::getType() const
{
    return type;
}
