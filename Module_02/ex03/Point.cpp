/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:54:11 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/12 18:54:29 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point(): x(Fixed(0)), y(Fixed(0)) {}

Point::Point(const Fixed x_tmp, const Fixed y_tmp): x(x_tmp), y(y_tmp) {}

Point::Point(const Point&tmp): x(tmp.x), y(tmp.y) {}

Point& Point::operator =(const Point& tmp){
    (void) tmp;
    return *this;
}

Point::~Point(){}

const Fixed& Point::get_x() const{return x;}
 
const Fixed& Point::get_y() const{return y;}