/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:23:06 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/14 23:00:15 by noctis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("iii");
    ft_log("--------------");
    a.attack("uuu");
    a.highFivesGuys();
    ft_log("--------------");
    a.takeDamage(10);
    ft_log("--------------");
}
