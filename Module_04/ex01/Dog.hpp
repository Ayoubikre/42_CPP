#pragma once

#include "main.hpp"

class Dog: public Animal{
    private:
        Brain * iq;

    public:
        Dog(std::string name = "Dog");
        Dog(const Dog& tmp);
        Dog& operator=(const Dog&tmp);
        virtual ~Dog();

        virtual void makeSound() const;
        void ft_print_ideas() const;
};