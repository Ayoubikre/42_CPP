/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:51:46 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/17 13:56:07 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string tmp): ClapTrap(tmp)
{
    ft_log("FragTrap Default constructor called");
    health=100;
    energy=100;
    damage=30;
}

FragTrap::FragTrap(const FragTrap& tmp): ClapTrap(tmp.name)
{
    ft_log("FragTrap copy constructor called");
    this->name=tmp.name;   
    this->health=tmp.health;   
    this->energy=tmp.energy;   
    this->damage=tmp.damage;   
}

FragTrap& FragTrap::operator=(const FragTrap& tmp)
{
    ft_log("FragTrap Copy assignment operator called");
    if(this!=&tmp)
    {
        this->name=tmp.name;   
        this->health=tmp.health;   
        this->energy=tmp.energy;   
        this->damage=tmp.damage;   
    }
    return *this;
}

FragTrap::~FragTrap()
{
    ft_log("FragTrap Default Distructor called");
}

void FragTrap::highFivesGuys()
{
    ft_log("FragTrap "+ name +" requests a positive high five!");
}

void FragTrap::attack(const std::string& target){
    if(health==0 || energy==0)
        return ;
    ft_log("FragTrap "+ name +" attacks "+ target +" , causing " << damage << " points of damage!");
    energy--;
}
