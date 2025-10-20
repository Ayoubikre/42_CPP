/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:01:31 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 13:09:04 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "main.hpp"

class WrongAnimal{
    
    protected:
        std::string type;
        
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& tmp);
        WrongAnimal& operator=(const WrongAnimal &tmp);
        virtual ~WrongAnimal();

        void makeSound() const;
        const std::string getType() const;

};

#endif