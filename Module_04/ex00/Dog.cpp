#include "main.hpp"

Dog::Dog(std::string name): Animal()
{
    ft_log("Dog Default constructor called");
    this->type=name;
}

Dog::Dog(const Dog& tmp): Animal(tmp)
{
    ft_log("Dog copy constructor called");
}

Dog& Dog::operator=(const Dog& tmp)
{
    ft_log("Dog Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
    }
    return *this;
}

Dog::~Dog()
{
    ft_log("Dog Default Distructor called");
}

void Dog::makeSound() const
{
    ft_log("S............DOG............S");
}