/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:15:44 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 13:27:21 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "main.hpp"

class Brain{
    
    private:
        std::string ideas[100];
        
    public:
        Brain();
        Brain(const Brain& tmp);
        Brain& operator=(const Brain &tmp);
        virtual ~Brain();
        
};

#endif