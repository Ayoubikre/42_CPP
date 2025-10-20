/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:43:17 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 14:14:42 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Dog::Dog(std::string tmp): Animal()
{
    ft_log("Dog Default constructor called");
    this->type=tmp;
    br= new Brain();
}

Dog::Dog(const Dog& tmp): Animal(), br(new Brain(*tmp.br))
{
    ft_log("Dog copy constructor called");
    this->type=tmp.type;
}

Dog& Dog::operator=(const Dog& tmp)
{
    ft_log("Dog Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
        delete this->br;
        this->br= new Brain(*tmp.br);
    }
    return *this;
}

Dog::~Dog()
{
    delete br;
    ft_log("Dog Default Distructor called");
}

void Dog::makeSound() const
{
    ft_log("S............DOG............S");
}