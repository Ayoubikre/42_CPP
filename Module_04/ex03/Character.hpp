#pragma once 

#include "main.hpp"

class AMateria;

class Character: public ICharacter
{
    private:
        std::string name;
        AMateria* inv[4];

        int n;
        AMateria* trash[100];
        
    public:
        Character(std::string name);
        Character(const Character& tmp);
        Character& operator=(const Character& tmp);
        virtual ~Character();
        
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};