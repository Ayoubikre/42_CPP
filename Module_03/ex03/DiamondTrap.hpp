/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:41:32 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/17 13:29:26 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "FragTrap.hpp"

#define ft_log_(x) std::cout << x
#define ft_log(x)  std::cout << x << std::endl

class DiamondTrap: public ScavTrap , public FragTrap{
    private:
        std::string name;
        
    public:
        DiamondTrap(std::string tmp);
        DiamondTrap(const DiamondTrap& tmp);
        DiamondTrap& operator=(const DiamondTrap& tmp);
        ~DiamondTrap();
        
        void attack(const std::string& target);
        void whoAmI();
};

#endif