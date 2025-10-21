/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:56:05 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/21 18:19:49 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "main.hpp"

class ICharacter; 

class AMateria{
    protected:
        const std::string type;

    public:
        AMateria(std::string const & tmp);
        AMateria(const AMateria& tmp);
        AMateria& operator=(const AMateria &tmp);
        virtual ~AMateria();

        std::string const& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

};

#endif