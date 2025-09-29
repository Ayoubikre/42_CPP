/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:46:07 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/29 20:59:17 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::ft_set_name(std::string t) { name=t;}

void Zombie::announce()
{
    std::cout << name+": BraiiiiiiinnnzzzZ..."<<std::endl ;
}

Zombie::~Zombie()
{
    std::cout << name+": BraiiiiiiinnnzzzZ... destructiiiiiion..."<<std::endl ;
}
