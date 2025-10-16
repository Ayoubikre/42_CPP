/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:27:30 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/16 16:16:16 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ---------------------  constra... :
Fixed::Fixed ():fixed_n(0){
    ft_log("Default constructor called");
}

Fixed::Fixed(const Fixed& tmp) {
    ft_log("Copy constructor called");
    *this=tmp;
}


// ---------------------  distra... :
Fixed::~Fixed () {
    ft_log("Destructor called");
}


// ---------------------  operat... :
Fixed& Fixed::operator=(const Fixed& tmp)
{
    ft_log("Copy assignment operator called");
    if(this != &tmp)
    {
        this->fixed_n=tmp.getRawBits();
    }
    return *this;
}


// ---------------------  functions :
int Fixed::getRawBits(void) const {
    ft_log("getRawBits member function called");
    return fixed_n;
}

void Fixed::setRawBits(int const raw){
    ft_log("setRawBits member function called");
    fixed_n=raw;
}
