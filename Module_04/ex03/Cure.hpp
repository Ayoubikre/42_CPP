/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:17:56 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 21:49:13 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "main.hpp"

class Cure : public AMateria{
    public:
        Cure(std::string const & tmp = "cure");
        Cure(const Cure& tmp);
        Cure& operator=(const Cure &tmp);
        ~Cure();

        virtual Cure* clone() const;
        // virtual void use(ICharacter& target);

};

#endif