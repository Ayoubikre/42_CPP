/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:47:55 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/21 21:34:32 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Character::Character(std::string tmp): name(tmp){
    ft_log("Character Default constructor called");
    for (int i = 0; i < 4; ++i)
        t[i] = NULL;
}

Character::Character(const Character& tmp):name(tmp.name)
{
    ft_log("Character copy constructor called");
    for(int i=0; i<4; i++){
        t[i] = NULL;
        if(tmp.t[i])
            t[i] = tmp.t[i]->clone();    
    }
}

Character& Character::operator=(const Character& tmp){
    ft_log("Character Copy assignment operator called");
    if(this != &tmp)
    {
        this->name=tmp.name;
        for(int i=0; i<4; i++){
            delete this->t[i];
            this->t[i] = NULL;
            if(tmp.t[i])
                this->t[i] = tmp.t[i]->clone();
        }
    }
    return *this;
}

Character::~Character(){
    ft_log("Character Default Distructor called");
    for(int i=0; i<4; i++){
        if(t[i])
            delete t[i];
        this->t[i] = NULL;
    }
}


std::string const & Character::getName() const{
    return name;
}

void Character::equip(AMateria* m){
    if(!m)
        return;
    for(int i=0; i < 4;i++)
    {
        if(!t[i])
        {
            t[i]=m;
            break;
        }
    }
}

void Character::unequip(int idx){
    if(0 <= idx && idx <=3 && t[idx])
        t[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
    if(0 <= idx && idx <=3 && t[idx])
        t[idx]->use(target);
}

