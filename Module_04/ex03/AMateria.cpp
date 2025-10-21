/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ 
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:56:03 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 21:09:57 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

AMateria::AMateria(std::string const & tmp): type(tmp) {
    ft_log("AMateria Default constructor called");
}

AMateria::AMateria(const AMateria &tmp): type(tmp.type) {
    ft_log("AMateria copy constructor called");
}

AMateria& AMateria::operator=(const AMateria &tmp){
    ft_log("AMateria Copy assignment operator called");
    (void) tmp;
    return *this;
}

AMateria::~AMateria(){
    ft_log("AMateria Default Distructor called");
}

std::string const& AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter& target){ (void) target;}
