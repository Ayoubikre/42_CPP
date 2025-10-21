/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:24:48 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/21 21:34:09 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

MateriaSource::MateriaSource(){
    ft_log("MateriaSource Default constructor called");
    for(int i=0; i<4; i++)
        t[i]= NULL;
}

MateriaSource::MateriaSource(const MateriaSource& tmp){
    ft_log("MateriaSource copy constructor called");
    for(int i=0;i<4;i++)
    {
        t[i]=NULL;
        if(tmp.t[i])
            t[i]=tmp.t[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& tmp){
    ft_log("MateriaSource Copy assignment operator called");
    if(this != &tmp)
    {
        for(int i=0;i<4;i++)
        {
            delete t[i];
            this->t[i]=NULL;
            if(tmp.t[i])
                this->t[i]=tmp.t[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(){
    ft_log("MateriaSource Default Distructor called");
    for(int i=0;i<4;i++)
    {
        if(t[i])
            delete t[i];
        t[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* m){
    if(!m)
        return;
    for(int i=0; i<4 ;i++)
    {
        if(!t[i])
        {
            t[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for(int i=0;i<4;i++)
    {
        if(t[i] && t[i]->getType()==type)
            return t[i]->clone();
    }
    return NULL;
}

