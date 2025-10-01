/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:35:07 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/01 13:44:11 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** ar)
{
    if(ac != 2)
    {
        std::cout<< "Invalide Arguments" << std::endl;
        return 0;
    }
    
    Harl h;
    
    h.complain(ar[1]);
        
    return 0;
}
