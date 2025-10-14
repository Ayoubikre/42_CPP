/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 21:30:31 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/14 21:50:31 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define ft_log_(x) std::cout << x
#define ft_log(x)  std::cout << x << std::endl

class ScavTrap: public ClapTrap{
    private:
        std::string name;
        unsigned int health;
        unsigned int energy;
        unsigned int damage;
    public:
        ScavTrap(std::string tmp);
        ScavTrap(const ScavTrap& tmp);
        ScavTrap& operator=(const ScavTrap& tmp);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};

#endif