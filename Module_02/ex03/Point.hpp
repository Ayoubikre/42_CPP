/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:54:07 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/12 18:10:37 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <math.h>

class Point {
    private:
        const Fixed x;
        const Fixed y;
        
    public:
        Point();
        Point(const Fixed x_tmp, const Fixed y_tmp);
        Point(const Point& tmp);
        
        Point& operator =(const Point& tmp);
        
        ~Point();

        const Fixed& get_x() const; 
        const Fixed& get_y() const; 
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif