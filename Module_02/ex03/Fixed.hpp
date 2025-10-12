/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:27:26 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/12 15:46:57 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <math.h>

#define ft_log_(x) std::cout << x
#define ft_log(x)  std::cout << x << std::endl

class Fixed{
    private:
        int fixed_n;
        static const int f_bits=8;

    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float i);
        Fixed(const Fixed& tmp);

        Fixed& operator =(const Fixed & tmp);
        
        bool operator <=(const Fixed & tmp) const;
        bool operator <(const Fixed & tmp) const;
        bool operator >=(const Fixed & tmp) const;
        bool operator >(const Fixed & tmp) const;
        bool operator ==(const Fixed & tmp) const;
        bool operator !=(const Fixed & tmp) const;
        
        Fixed operator +(const Fixed & tmp) const;
        Fixed operator -(const Fixed & tmp) const;
        Fixed operator *(const Fixed & tmp) const;
        Fixed operator /(const Fixed & tmp) const;
        
        Fixed operator ++(int); 
        Fixed operator --(int);
        Fixed& operator ++();
        Fixed& operator --();

        ~Fixed();

        int         getRawBits(void) const;
        void        setRawBits(int const raw);
        float       toFloat( void ) const;
        int         toInt( void ) const;

        static      Fixed& min(Fixed& a, Fixed& b);
        static      Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a,const Fixed& b);
        static const Fixed& max(const Fixed& a,const Fixed& b);
};

std::ostream& operator <<(std::ostream& os, const Fixed& tmp);

#endif
