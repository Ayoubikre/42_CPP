#include "main.hpp"

Cat::Cat(std::string name): Animal()
{
    ft_log("Cat Default constructor called");
    this->type=name;
}

Cat::Cat(const Cat& tmp): Animal(tmp)
{
    ft_log("Cat copy constructor called");
}

Cat& Cat::operator=(const Cat& tmp)
{
    ft_log("Cat Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
    }
    return *this;
}

Cat::~Cat()
{
    ft_log("Cat Default Distructor called");
}

void Cat::makeSound() const
{
    ft_log("S............CAT............S");
}