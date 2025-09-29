/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:46:01 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/29 21:02:50 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int n = 5;

	Zombie* z = zombieHorde(5, "meee");
	for(int i=0;i<n;i++)
		z[i].announce();
	delete[] z;
}