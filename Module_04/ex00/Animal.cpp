/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:47:44 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 13:11:46 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Animal::Animal():type("Unknown")
{
    ft_log("Animal Default constructor called");
}

Animal::Animal(const Animal& tmp):type(tmp.type)
{
    ft_log("Animal copy constructor called");
}

Animal& Animal::operator=(const Animal& tmp)
{
    ft_log("Animal Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
    }
    return *this;
}

Animal::~Animal()
{
    ft_log("Animal Default Distructor called");
}

void Animal::makeSound() const
{
    ft_log("S.............A.............S");
}

const std::string Animal::getType() const { return type; }
