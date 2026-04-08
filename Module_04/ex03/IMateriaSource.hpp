#pragma once 

#include "main.hpp"

class AMateria;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}

        virtual void learnMateria(AMateria* x) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};