/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:03:39 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 17:59:47 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string t,Weapon& club) :  name(t), W(club) {}

void HumanA::attack()
{
    ft_log(name +" attacks with their "+W.getType());
}
