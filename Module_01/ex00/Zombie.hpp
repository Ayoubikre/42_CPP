/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:15:03 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/29 20:15:05 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

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