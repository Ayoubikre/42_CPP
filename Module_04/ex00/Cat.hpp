#pragma once

#include "main.hpp"

class Cat: public Animal{

    public:
        Cat(std::string name = "Cat");
        Cat(const Cat& tmp);
        Cat& operator=(const Cat &tmp);
        virtual ~Cat();

        virtual void makeSound() const;

};