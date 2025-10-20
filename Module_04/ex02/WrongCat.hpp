/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:01:02 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 13:03:34 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "main.hpp"

class WrongCat: public WrongAnimal{

    public:
        WrongCat(std::string tmp = "WrongCat");
        WrongCat(const WrongCat& tmp);
        WrongCat& operator=(const WrongCat &tmp);
        ~WrongCat();

        void makeSound() const;

};

#endif