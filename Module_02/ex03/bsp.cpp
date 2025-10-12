/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:54:13 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/12 18:49:10 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Point v_0( c.get_x() - a.get_x() , c.get_y() - a.get_y() );
    Point v_1( b.get_x() - a.get_x() , b.get_y() - a.get_y() );
    Point v_2( point.get_x() - a.get_x() , point.get_y() - a.get_y() );

    // ft_log("--------");
    //     ft_log(v_0.get_x());
    //     ft_log(v_0.get_y());
    // ft_log("--------");
    //     ft_log(v_1.get_x());
    //     ft_log(v_1.get_y());
    // ft_log("--------");
    //     ft_log(v_2.get_x());
    //     ft_log(v_2.get_y());
    // ft_log("--------");

    Fixed d_00 = (v_0.get_x() * v_0.get_x()) + (v_0.get_y() * v_0.get_y());
    
    Fixed d_01 = (v_0.get_x() * v_1.get_x()) + (v_0.get_y() * v_1.get_y());

    Fixed d_11 = (v_1.get_x() * v_1.get_x()) + (v_1.get_y() * v_1.get_y());
    
    Fixed d_20 = (v_2.get_x() * v_0.get_x()) + (v_2.get_y() * v_0.get_y());
    
    Fixed d_21 = (v_2.get_x() * v_1.get_x()) + (v_2.get_y() * v_1.get_y());
    
    // ft_log("--------");
    //     ft_log(d_00);
    // ft_log("--------");
    //     ft_log(d_01);
    // ft_log("--------");
    //     ft_log(d_11);
    // ft_log("--------");
    //     ft_log(d_20);
    // ft_log("--------");
    //     ft_log(d_21);
    // ft_log("--------");

    Fixed denom = d_00 * d_11 - d_01 * d_01;
    
    Fixed u = (d_11 * d_20 - d_01 * d_21) / denom;
    
    Fixed v = (d_00 * d_21 - d_01 * d_20) / denom;
    
    // ft_log("--------");
    //     ft_log(denom);
    // ft_log("--------");
    //     ft_log(u);
    // ft_log("--------");
    //     ft_log(v);
    // ft_log("--------");

    if(u >= 0 && v >= 0 && u+v <= 1)
        return true;
    return false;
}
