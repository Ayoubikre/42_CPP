#include "main.hpp"

Cat::Cat(std::string name): Animal()
{
    ft_log("Cat Default constructor called");
    this->type=name;
    iq= new Brain();
}

Cat::Cat(const Cat& tmp): Animal(tmp)
{
    ft_log("Cat copy constructor called");
    iq= new Brain(*(tmp.iq));
}

Cat& Cat::operator=(const Cat& tmp)
{
    ft_log("Cat Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
        delete iq;
        iq = new Brain(*(tmp.iq));
    }
    return *this;
}

Cat::~Cat()
{
    ft_log("Cat Default Distructor called");
    delete iq;
}

void Cat::makeSound() const
{
    ft_log("S............CAT............S");
}

void Cat::ft_print_ideas() const
{
    iq->ft_print_ideas();
}
