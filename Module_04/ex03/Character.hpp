/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:48:04 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/21 18:13:24 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "main.hpp"

class Character : public ICharacter{
    private:
        std::string name;
        AMateria* t[4];
    
    public:
        Character(std::string tmp);
        Character(const Character& tmp);
        Character& operator=(const Character& tmp);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif