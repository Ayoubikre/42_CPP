/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:47:47 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 12:59:40 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "main.hpp"

class Animal{
    
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(const Animal& tmp);
        Animal& operator=(const Animal &tmp);
        virtual ~Animal();

        virtual void makeSound() const;
        const std::string getType() const;

};

#endif