/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:23:08 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 03:56:02 by noctis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define ft_log_(x) std::cout << x
#define ft_log(x)  std::cout << x << std::endl

class ClapTrap{
    protected:
        std::string name;
        unsigned int health;
        unsigned int energy;
        unsigned int damage;

    public:
        ClapTrap(std::string tmp);
        ClapTrap(const ClapTrap& tmp);
        ClapTrap& operator=(const ClapTrap& tmp);
        virtual ~ClapTrap();
    
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif