/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:15:03 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 17:20:40 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

#define ft_log_(x) std::cout << x
#define ft_log(x)  std::cout << x << std::endl

class Zombie
{
  private:
	std::string name;

  public:
	Zombie(std::string t);
	void announce();
	~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif