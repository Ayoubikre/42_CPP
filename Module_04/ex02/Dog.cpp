#include "main.hpp"

Dog::Dog(std::string name): Animal()
{
    ft_log("Dog Default constructor called");
    this->type=name;
    iq= new Brain();
}

Dog::Dog(const Dog& tmp): Animal(tmp)
{
    ft_log("Dog copy constructor called");
    iq= new Brain(*(tmp.iq));
}

Dog& Dog::operator=(const Dog& tmp)
{
    ft_log("Dog Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
        delete iq;
        iq = new Brain(*(tmp.iq));
    }
    return *this;
}

Dog::~Dog()
{
    ft_log("Dog Default Distructor called");
    delete iq;
}

void Dog::makeSound() const
{
    ft_log("S............DOG............S");
}

void Dog::ft_print_ideas() const
{
    iq->ft_print_ideas();
}
