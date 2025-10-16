/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:23:06 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/16 21:33:14 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("iii");    
    ft_log("--------------");
    a.attack("ooo");
    a.guardGate();
    ft_log("--------------");
    a.takeDamage(10);
    a.beRepaired(10);
    ft_log("--------------");
}
