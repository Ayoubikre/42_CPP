/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:27:22 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/11 17:34:55 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
        
    ft_log("a is " << a);
    ft_log("b is " << b);
    ft_log("c is " << c);
    ft_log("d is " << d);    
    ft_log("a is " << a.toInt() << " as integer");
    ft_log("b is " << b.toInt() << " as integer");
    ft_log("c is " << c.toInt() << " as integer");
    ft_log("d is " << d.toInt() << " as integer");
    
return 0;
}