/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:36:58 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 17:56:28 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string t): type(t) {}

void Weapon::setType(std::string t){type = t;}

const std::string& Weapon::getType(){return type;}

