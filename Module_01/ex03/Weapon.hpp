/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:37:02 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 17:52:02 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon();
        Weapon(std::string t);
        const std::string& getType();
        void setType(std::string t);
};

#endif

