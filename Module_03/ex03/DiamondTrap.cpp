/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:41:30 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/17 13:56:29 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string tmp):ClapTrap(tmp+"_clap_name"), ScavTrap(tmp), FragTrap(tmp), name(tmp)
{
    ft_log("DiamondTrap Default constructor called");
    health=100;
    energy=50;
    damage=30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& tmp):ClapTrap(tmp.name+"_clap_name"), ScavTrap(tmp.name), FragTrap(tmp.name), name(tmp.name)
{
    ft_log("DiamondTrap copy constructor called");
    this->name=tmp.name;   
    this->health=tmp.health;   
    this->energy=tmp.energy;   
    this->damage=tmp.damage;   
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& tmp)
{
    ft_log("DiamondTrap Copy assignment operator called");
    if(this != &tmp)
    {
        this->name=tmp.name;   
        this->health=tmp.health;   
        this->energy=tmp.energy;   
        this->damage=tmp.damage;   
    }
    return *this;
}

DiamondTrap::~DiamondTrap(){
    ft_log("DiamondTrap Default Distructor called");
}


void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    ft_log("DiamondTrap name : " << name);
    ft_log("ClapTrap name : " << ClapTrap::name);
}

