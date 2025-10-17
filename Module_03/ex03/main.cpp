/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:23:06 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/17 13:52:20 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("iii");
    ft_log("--------------");
    a.attack("ooo");
    ft_log("--------------");
    a.highFivesGuys();
    ft_log("--------------");
    a.whoAmI();
    ft_log("--------------");
    a.takeDamage(10);
    ft_log("--------------");
}
