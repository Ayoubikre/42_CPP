/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:54:13 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/16 15:42:28 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include "Point.hpp"

Fixed ft_check(Fixed A)
{
    if(A < Fixed(0))
        return (A * Fixed(-1));
    return A;
}

Fixed ft_calcul(Point const a, Point const b, Point const c)
{
    Fixed a_x=a.get_x();
    Fixed a_y=a.get_y();
    Fixed b_x=b.get_x();
    Fixed b_y=b.get_y();
    Fixed c_x=c.get_x();
    Fixed c_y=c.get_y();

    return (ft_check((a_x * (b_y - c_y)) + (b_x * (c_y - a_y)) + (c_x * (a_y - b_y))) / Fixed(2));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed a_b_c=ft_calcul(a, b, c);
    Fixed a_b_point=ft_calcul(a, b, point);
    Fixed b_c_point=ft_calcul(b, c, point);
    Fixed a_c_point=ft_calcul(a, c, point);

    if( a_b_point + b_c_point + a_c_point == a_b_c )
        return true;
    return false;
}
