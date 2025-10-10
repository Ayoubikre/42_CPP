/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:03:37 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 18:00:08 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string t): name(t) {}

void HumanB::setWeapon(Weapon& club){ W=&club;}

void HumanB::attack()
{
    ft_log(name +" attacks with their "+W->getType());
}


