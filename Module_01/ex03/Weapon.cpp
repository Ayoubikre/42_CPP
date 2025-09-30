/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:36:58 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/30 16:07:54 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string t){type = t;}

void Weapon::setType(std::string t){type = t;}

const std::string& Weapon::getType(){return type;}

