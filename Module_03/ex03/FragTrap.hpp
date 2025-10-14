/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:51:49 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/14 22:57:14 by noctis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define ft_log_(x) std::cout << x
#define ft_log(x)  std::cout << x << std::endl

class FragTrap: public ClapTrap{
    private:
        std::string name;
        unsigned int health;
        unsigned int energy;
        unsigned int damage;
    public:
        FragTrap(std::string tmp);
        FragTrap(const FragTrap& tmp);
        FragTrap& operator=(const FragTrap& tmp);
        ~FragTrap();

        void attack(const std::string& target);
        void highFivesGuys();
};

#endif