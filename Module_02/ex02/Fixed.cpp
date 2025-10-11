/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:27:30 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/11 21:55:10 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ---------------------  constra... :
Fixed::Fixed ():fixed_n(0){
    ft_log("Default constructor called");
}

Fixed::Fixed(const int i): fixed_n(i * (1 << f_bits)){
    ft_log("Int constructor called");
}

Fixed::Fixed(const float i): fixed_n(int((roundf(i * (1 << f_bits))))){
    ft_log("Float constructor called");
}

Fixed::Fixed(const Fixed& tmp) {
    ft_log("Copy constructor called");
    *this=tmp;
}


// ---------------------  distra... :
Fixed::~Fixed () {
    ft_log("Destructor called");
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

float  Fixed::toFloat( void ) const{
    return (fixed_n / float(1 << f_bits));
}

int  Fixed::toInt( void ) const{
    return (fixed_n / (1 << f_bits));
}


// ---------------------  operat... :
Fixed& Fixed::operator=(const Fixed& tmp)
{
    ft_log("Copy assignment operator called");
    if(this != &tmp)
    {
        this->fixed_n=tmp.fixed_n;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& tmp){
    out << tmp.toFloat();
    return out;
}

// Fixed& Fixed::operator<=(const Fixed & tmp){
//     if(this->fixed_n <=tmp.fixed_n)
//         return *this;
//     return tmp;
// }
