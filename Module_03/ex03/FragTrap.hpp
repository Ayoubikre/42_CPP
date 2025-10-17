/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:51:49 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/17 12:01:27 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define ft_log_(x) std::cout << x
#define ft_log(x)  std::cout << x << std::endl

class FragTrap: virtual public ClapTrap{
    public:
        FragTrap(std::string tmp);
        FragTrap(const FragTrap& tmp);
        FragTrap& operator=(const FragTrap& tmp);
        ~FragTrap();

        void attack(const std::string& target);
        void highFivesGuys();
};

#endif