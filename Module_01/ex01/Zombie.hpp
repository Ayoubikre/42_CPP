/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:15:03 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 17:22:00 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

class Zombie
{
  private:
	std::string name;

  public:
	void announce();
	void ft_set_name(std::string t);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif