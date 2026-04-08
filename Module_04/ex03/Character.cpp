#include "main.hpp"

Character::Character(std::string name):name(name)
{
    ft_log("Character Default constructor called");
    for(int i=0;i<4;i++)
        inv[i]=NULL;
    n=0;
    for(int i=0;i<100;i++)
        trash[i]=NULL;
}

Character::Character(const Character& tmp):name(tmp.name)
{
    ft_log("Character copy constructor called");
        for(int i=0;i<4;i++)
        {
            if(tmp.inv[i])
                this->inv[i]=tmp.inv[i]->clone();
            else
                this->inv[i]=NULL;
        }
        n=tmp.n;
        for(int i=0;i<100;i++)
        {
            if(tmp.trash[i])
                this->trash[i]=tmp.trash[i]->clone();
            else
                this->trash[i]=NULL;
        }
}

Character& Character::operator=(const Character& tmp)
{
    ft_log("Character Copy assignment operator called");
    if(this != &tmp)
    {
        this->name=tmp.name;
        for(int i=0;i<4;i++)
        {
            delete(this->inv[i]);
            if(tmp.inv[i])
                this->inv[i]=tmp.inv[i]->clone();
            else
                this->inv[i]=NULL;
        }
        this->n=tmp.n;
        for(int i=0;i<100;i++)
        {
            delete(this->trash[i]);
            if(tmp.trash[i])
                this->trash[i]=tmp.trash[i]->clone();
            else
                this->trash[i]=NULL;
        }
    }
    return *this;
}

Character::~Character()
{
    ft_log("Character Default Distructor called");
    for(int i=0;i<4;i++)
        delete(this->inv[i]);
    for(int i=0;i<100;i++)
        delete(this->trash[i]);
}


std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for(int i=0;i<4;i++)
    {
        if(!inv[i])
        {
            inv[i]=m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if(0 <= idx && idx < 4 && inv[idx])
    {
        if(n==100)
        {
            for(int i=0;i<100;i++)
            {
                delete(this->trash[i]);
                this->trash[i]=NULL;
            }
            n=0;
        }
        for(int i=0;i<100;i++)
        {
            if(!trash[i])
            {
                trash[i]=inv[idx];
                n++;
                break;
            }
        }
        inv[idx]=NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(0 <= idx && idx < 4 && inv[idx])
        inv[idx]->use(target);
}
