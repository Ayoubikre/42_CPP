/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:18:01 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/21 21:36:35 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Ice::Ice(std::string const & tmp): AMateria(tmp){
    ft_log("Ice Default constructor called");
}

Ice::Ice(const Ice &tmp): AMateria(tmp){
    ft_log("Ice copy constructor called");
}

Ice& Ice::operator=(const Ice &tmp){
    ft_log("Ice Copy assignment operator called");
    (void) tmp;
    return *this;
}

Ice::~Ice(){
    ft_log("Ice Default Distructor called");
}

Ice* Ice::clone() const{
    return new Ice("ice");
}

void Ice::use(ICharacter& target){
    ft_log("* shoots an ice bolt at "<< target.getName() <<" *");
}
