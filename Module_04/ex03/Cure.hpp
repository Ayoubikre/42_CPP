#pragma once 

#include "main.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(const Cure& tmp);
        Cure& operator=(const Cure& tmp);
        virtual  ~Cure();

        virtual AMateria* clone() const ;
        virtual void use(ICharacter& target);
};
