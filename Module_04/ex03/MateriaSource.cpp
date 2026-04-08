#include "main.hpp"

MateriaSource::MateriaSource()
{
    ft_log("MateriaSource Default constructor called");
    for(int i=0;i<4;i++)
        src[i]=NULL;
}

MateriaSource::MateriaSource(const MateriaSource& tmp)
{
    ft_log("MateriaSource copy constructor called");
    for(int i=0;i<4;i++)
    {
        if(tmp.src[i])
            src[i]=tmp.src[i]->clone();
        else
            src[i]=NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& tmp)
{
    ft_log("MateriaSource Copy assignment operator called");
    if(this != &tmp)
    {
        for(int i=0;i<4;i++)
        {
            delete(src[i]);
            if(tmp.src[i])
                this->src[i]=tmp.src[i]->clone();
            else
                this->src[i]=NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    ft_log("MateriaSource Default Distructor called");
    for(int i=0;i<4;i++)
        delete(src[i]);
}


void MateriaSource::learnMateria(AMateria* x)
{
    for(int i=0;i<4;i++)
    {
        if(!src[i])
        {
            src[i]=x;
            return;
        }
    }
    delete(x);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i=0;i<4;i++)
    {
        if(src[i] && src[i]->getType()==type)
        {
            return src[i]->clone();
        }
    }
    return NULL;
}

