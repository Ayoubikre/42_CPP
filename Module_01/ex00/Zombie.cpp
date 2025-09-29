/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:46:07 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/29 20:27:33 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string t) { name=t; }

void Zombie::announce()
{
    std::cout << name+": BraiiiiiiinnnzzzZ..."<<std::endl ;
}

Zombie::~Zombie()
{
    std::cout << name+": BraiiiiiiinnnzzzZ... destructiiiiiion..."<<std::endl ;
}
