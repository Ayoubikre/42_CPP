#pragma once

#include "main.hpp"

class Dog: public Animal{
    
    public:
        Dog(std::string name = "Dog");
        Dog(const Dog& tmp);
        Dog& operator=(const Dog&tmp);
        virtual ~Dog();

        virtual void makeSound() const;
};