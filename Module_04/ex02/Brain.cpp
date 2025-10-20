/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:15:42 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 13:24:00 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Brain::Brain()
{
    ft_log("Brain Default constructor called");
}

Brain::Brain(const Brain& tmp)
{
    ft_log("Brain copy constructor called");
    for(int i=0; i<100; i++)
        this->ideas[i]=tmp.ideas[i];
}

Brain& Brain::operator=(const Brain& tmp)
{
    ft_log("Brain Copy assignment operator called");
    if(this != &tmp)
    {
        for(int i=0; i<100; i++)
            this->ideas[i]=tmp.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    ft_log("Brain Default Distructor called");
}
