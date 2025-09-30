/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:03:39 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/30 16:37:04 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string t,Weapon& club) :  W(club) {name = t;}

void HumanA::attack()
{
    std::cout << name +" attacks with their "+W.getType();
    std::cout << std::endl;
}
