/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:17:53 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/21 21:36:39 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cure::Cure(std::string const & tmp): AMateria(tmp){
    ft_log("Cure Default constructor called");
}

Cure::Cure(const Cure &tmp): AMateria(tmp){
    ft_log("Cure copy constructor called");
}

Cure& Cure::operator=(const Cure &tmp){
    ft_log("Cure Copy assignment operator called");
    (void) tmp;
    return *this;
}

Cure::~Cure(){
    ft_log("Cure Default Distructor called");
    
}

Cure* Cure::clone() const{
    return new Cure("cure");
}

void Cure::use(ICharacter& target){
    ft_log("* heals "<< target.getName() <<"'s wounds ");
}

