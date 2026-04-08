#pragma once

#include "main.hpp"

class Animal{
    
    protected:
        std::string type;
        
    public:
        Animal(std::string name = "Unknown");
        Animal(const Animal& tmp);
        Animal& operator=(const Animal &tmp);
        virtual ~Animal();

        virtual void makeSound() const = 0;
        const std::string getType() const;

};