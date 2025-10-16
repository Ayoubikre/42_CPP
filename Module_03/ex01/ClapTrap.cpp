/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:23:13 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/16 21:19:15 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string tmp): name(tmp), health(10), energy(10), damage(0) {
    ft_log("ClapTrap Default constructor called");
}

ClapTrap::ClapTrap(const ClapTrap& tmp): name(tmp.name), health(tmp.health), energy(tmp.energy), damage(tmp.damage) {
    ft_log("ClapTrap copy constructor called");
}

ClapTrap& ClapTrap::operator =(const ClapTrap& tmp){
    ft_log("ClapTrap Copy assignment operator called");
    if(this != & tmp)
    {
        this->name=tmp.name;
        this->health=tmp.health;
        this->energy=tmp.energy;
        this->damage=tmp.damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    ft_log("ClapTrap Default Distructor called");
}

void ClapTrap::attack(const std::string& target){
    if(health==0 || energy==0)
        return ;
    ft_log("ClapTrap "+ name +" attacks "+ target +" , causing " << damage << " points of damage!");
    energy--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(health==0 || energy==0)
        return ;
    ft_log("ClapTrap is Taking damage ");
    for(unsigned int i=0;i<amount && health > 0; i++)
        health--;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(health==0 || energy==0)
        return ;
    ft_log("ClapTrap is in Repaired Mode");
    health += amount;
    energy--;
}
