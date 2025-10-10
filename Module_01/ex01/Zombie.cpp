/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:46:07 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 17:30:11 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::ft_set_name(std::string t) { name=t;}

void Zombie::announce()
{
    ft_log(name+": BraiiiiiiinnnzzzZ...");
}

Zombie::~Zombie()
{
    ft_log(name+": BraiiiiiiinnnzzzZ... destructiiiiiion...");
}
