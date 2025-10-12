/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:23:13 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/12 21:15:59 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string tmp): name(tmp), health(10), energy(10), damage(0) {
    ft_log("Default constructor called");
}

ClapTrap::ClapTrap(const ClapTrap& tmp): name(tmp.name), health(tmp.health), energy(tmp.energy), damage(tmp.damage) {
    ft_log("copy constructor called");
}

ClapTrap& ClapTrap::operator =(const ClapTrap& tmp){
    ft_log("Copy assignment operator called");
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
    ft_log("Default Distructor called");
}

void ClapTrap::attack(const std::string& target){
    if(health==0 || energy==0)
        return ;
    ft_log("ClapTrap "+ name +" attacks "+ target +" , causing "+ std::to_string(damage) +" points of damage!");
    energy--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(health==0 || energy==0)
        return ;
    ft_log("health decrease by : "+ std::to_string(amount));
    health-=amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(health==0 || energy==0)
        return ;
    ft_log("health increase by : "+ std::to_string(amount));
    health+=amount;
    energy--;
}

