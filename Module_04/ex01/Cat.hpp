#pragma once

#include "main.hpp"

class Cat: public Animal{
    private:
        Brain * iq; 

    public:
        Cat(std::string name = "Cat");
        Cat(const Cat& tmp);
        Cat& operator=(const Cat &tmp);
        virtual ~Cat();

        virtual void makeSound() const;
        void ft_print_ideas() const;
};