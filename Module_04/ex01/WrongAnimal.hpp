#pragma once

#include "main.hpp"

class WrongAnimal{
    
    protected:
        std::string type;
        
    public:
        WrongAnimal(std::string name = "Unknown");
        WrongAnimal(const WrongAnimal& tmp);
        WrongAnimal& operator=(const WrongAnimal &tmp);
        ~WrongAnimal();

        void makeSound() const;
        const std::string getType() const;

};