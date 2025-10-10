/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:46:07 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 17:21:28 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string t): name(t) {}

void Zombie::announce()
{
    ft_log(name+": BraiiiiiiinnnzzzZ...");
}

Zombie::~Zombie()
{
    ft_log(name+": BraiiiiiiinnnzzzZ... destructiiiiiion...");
}
