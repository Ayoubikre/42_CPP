/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:43:25 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 14:00:01 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cat::Cat(std::string tmp): Animal()
{
    ft_log("Cat Default constructor called");
    this->type=tmp;
    br= new Brain();
}

Cat::Cat(const Cat& tmp): Animal(), br(new Brain(*tmp.br))
{
    ft_log("Cat copy constructor called");
    this->type=tmp.type;
}

Cat& Cat::operator=(const Cat& tmp)
{
    ft_log("Cat Copy assignment operator called");
    if(this != &tmp)
    {
        this->type=tmp.type;
        delete this->br;
        this->br= new Brain(*tmp.br);
    }
    return *this;
}

Cat::~Cat()
{
    ft_log("Cat Default Distructor called");
    delete br;
}

void Cat::makeSound() const
{
    ft_log("S............CAT............S");
}