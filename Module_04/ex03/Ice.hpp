/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:17:59 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 21:48:56 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "main.hpp"

class Ice : public AMateria{
    public:
        Ice(std::string const & tmp = "ice");
        Ice(const Ice& tmp);
        Ice& operator=(const Ice &tmp);
        ~Ice();

        virtual Ice* clone() const;
        // virtual void use(ICharacter& target);
};

#endif