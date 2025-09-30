/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:03:37 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/30 16:40:40 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string t){name = t;}

void HumanB::setWeapon(Weapon& club){ W=&club;}

void HumanB::attack()
{
    std::cout << name +" attacks with their "+W->getType();
    std::cout << std::endl;
}


