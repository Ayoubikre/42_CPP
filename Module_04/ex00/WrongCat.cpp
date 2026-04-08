#include "main.hpp"

WrongCat::WrongCat(std::string name): WrongAnimal()
{
    ft_log("WrongCat Default constructor called");
    this->type=name;
}

WrongCat::WrongCat(const WrongCat& tmp): WrongAnimal()
{
    ft_log("WrongCat copy constructor called");
    this->type=tmp.type;
}

WrongCat& WrongCat::operator=(const WrongCat& tmp)
{
    ft_log("WrongCat Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    ft_log("WrongCat Default Distructor called");
}

void WrongCat::makeSound() const
{
    ft_log("S............W_C............S");
}