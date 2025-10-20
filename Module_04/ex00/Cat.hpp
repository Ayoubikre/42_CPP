/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:43:23 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 12:39:52 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "main.hpp"

class Cat: public Animal{

    public:
        Cat(std::string tmp = "Cat");
        Cat(const Cat& tmp);
        Cat& operator=(const Cat &tmp);
        ~Cat();

        void makeSound() const;

};

#endif