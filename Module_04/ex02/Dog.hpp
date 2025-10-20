/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:43:26 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 13:25:04 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "main.hpp"

class Dog: public Animal{

    private:
        Brain* br;

    public:
        Dog(std::string tmp = "Dog");
        Dog(const Dog& tmp);
        Dog& operator=(const Dog&tmp);
        ~Dog();

        void makeSound() const;
};

#endif