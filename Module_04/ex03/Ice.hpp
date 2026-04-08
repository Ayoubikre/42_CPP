#pragma once 

#include "main.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(const Ice& tmp);
        Ice& operator=(const Ice& tmp);
        virtual ~Ice();

        virtual AMateria* clone() const ;
        virtual void use(ICharacter& target);
};
