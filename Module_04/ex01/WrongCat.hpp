#pragma once

#include "main.hpp"

class WrongCat: public WrongAnimal{

    public:
        WrongCat(std::string name = "WrongCat");
        WrongCat(const WrongCat& tmp);
        WrongCat& operator=(const WrongCat &tmp);
        ~WrongCat();

        void makeSound() const;

};