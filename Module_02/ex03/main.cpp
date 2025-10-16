/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:27:22 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/16 15:40:20 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
    const Point  i(Fixed(3), Fixed(3));
    
    const Point  a(Fixed(1), Fixed(1));
    const Point  b(Fixed(4), Fixed(2));
    const Point  c(Fixed(2), Fixed(5));

    // ft_log("--------");
    //     ft_log(a.get_x());
    //     ft_log(a.get_y());
    // ft_log("--------");
    //     ft_log(b.get_x());
    //     ft_log(b.get_y());
    // ft_log("--------");
    //     ft_log(c.get_x());
    //     ft_log(c.get_y());
    // ft_log("--------");
    //     ft_log(i.get_x());
    //     ft_log(i.get_y());
    // ft_log("--------");
    
    ft_log(bsp(a,b,c,i));
    
	return (0);
}
