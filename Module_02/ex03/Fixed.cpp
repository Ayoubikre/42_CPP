/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:27:30 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/12 18:44:06 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ---------------------  constra... :
Fixed::Fixed ():fixed_n(0){
    // ft_log("Default constructor called");
}

Fixed::Fixed(const int i): fixed_n(i * (1 << f_bits)){
    // ft_log("Int constructor called");
}

Fixed::Fixed(const float i): fixed_n(int((roundf(i * (1 << f_bits))))){
    // ft_log("Float constructor called");
}

Fixed::Fixed(const Fixed& tmp) {
    // ft_log("Copy constructor called");
    *this=tmp;
}


// ---------------------  distra... :
Fixed::~Fixed () {
    // ft_log("Destructor called");
}


// ---------------------  functions :
int Fixed::getRawBits(void) const {
    // ft_log("getRawBits member function called");
    return fixed_n;
}

void Fixed::setRawBits(int const raw){
    // ft_log("setRawBits member function called");
    fixed_n=raw;
}

float  Fixed::toFloat( void ) const{
    return (fixed_n / float(1 << f_bits));
}

int  Fixed::toInt( void ) const{
    return (fixed_n / (1 << f_bits));
}


// ---------------------  ostr... :
std::ostream& operator <<(std::ostream& out, const Fixed& tmp){
    out << tmp.toFloat();
    return out;
}


// ---------------------  operat... :
Fixed& Fixed::operator =(const Fixed& tmp)
{
    // ft_log("Copy assignment operator called");
    if(this != &tmp)
    {
        this->fixed_n=tmp.fixed_n;
    }
    return *this;
}

bool Fixed::operator <=(const Fixed & tmp) const{
    return(this->fixed_n <= tmp.fixed_n);
}

bool Fixed::operator <(const Fixed & tmp) const{
    return(this->fixed_n < tmp.fixed_n);
}

bool Fixed::operator >=(const Fixed & tmp) const{
    return(this->fixed_n >= tmp.fixed_n);
}

bool Fixed::operator >(const Fixed & tmp) const{
    return(this->fixed_n > tmp.fixed_n);
}

bool Fixed::operator ==(const Fixed & tmp) const{
    return(this->fixed_n == tmp.fixed_n);
}

bool Fixed::operator !=(const Fixed & tmp) const{
    return(this->fixed_n != tmp.fixed_n);
}


Fixed Fixed::operator +(const Fixed & tmp) const{
    Fixed rs;
    rs.fixed_n = this->fixed_n+tmp.fixed_n;
    return rs;
}

Fixed Fixed::operator -(const Fixed & tmp) const{
    Fixed rs;
    rs.fixed_n = this->fixed_n-tmp.fixed_n;
    return rs;
}

Fixed Fixed::operator *(const Fixed & tmp) const{
    Fixed rs;
    rs.fixed_n = (this->fixed_n*tmp.fixed_n) / (1 << this->f_bits);
    return rs ;
}

Fixed Fixed::operator /(const Fixed & tmp) const{
    Fixed rs;
    rs.fixed_n = ((this->fixed_n *(1 << this->f_bits)) / tmp.fixed_n);
    return rs;
}


Fixed Fixed::operator ++(int){
    Fixed tmp = *this;
    this->fixed_n += 1;
    return tmp; // ++a
}

Fixed Fixed::operator --(int){
    Fixed tmp= *this;
    this->fixed_n -= 1;
    return tmp;
}

Fixed& Fixed::operator ++(){
    this->fixed_n += 1;
    return *this; // a++
}

Fixed& Fixed::operator --(){
    this->fixed_n -= 1;
    return *this;
}


// ---------------------  stati... :
Fixed& Fixed::min(Fixed& a, Fixed& b){
    if(a <= b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a,const Fixed& b){
    if(a <= b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    if(a >= b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a,const Fixed& b){
    if(a >= b)
        return a;
    return b;
}
