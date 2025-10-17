/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 21:30:32 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/17 13:56:03 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string tmp): ClapTrap(tmp)
{
    ft_log("ScavTrap Default constructor called");
    health=100;
    energy=50;
    damage=20;
}

ScavTrap::ScavTrap(const ScavTrap& tmp): ClapTrap(tmp.name)
{
    ft_log("ScavTrap copy constructor called");
    this->name=tmp.name;   
    this->health=tmp.health;   
    this->energy=tmp.energy;   
    this->damage=tmp.damage;   
}

ScavTrap& ScavTrap::operator=(const ScavTrap& tmp)
{
    ft_log("ScavTrap Copy assignment operator called");
    if(this!=&tmp)
    {
        this->name=tmp.name;   
        this->health=tmp.health;   
        this->energy=tmp.energy;   
        this->damage=tmp.damage;   
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    ft_log("ScavTrap Default Distructor called");
}

void ScavTrap::guardGate()
{
    ft_log("ScavTrap "+ name +" is now in gate keeper mode");
}

void ScavTrap::attack(const std::string& target){
    if(health==0 || energy==0)
        return ;
    ft_log("ScavTrap "+ name +" attacks "+ target +" , causing " << damage << " points of damage!");
    energy--;
}
