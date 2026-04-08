#pragma once 

#include "main.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* src[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& tmp);
        MateriaSource& operator=(const MateriaSource& tmp);
        virtual ~MateriaSource();

        virtual void learnMateria(AMateria* x);
        virtual AMateria* createMateria(std::string const & type);
};