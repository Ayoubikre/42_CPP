/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:35:07 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/01 13:37:09 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl h;
    
    h.complain("DEBUG");
        std::cout << std::endl;
    h.complain("INFO");
        std::cout << std::endl;
    h.complain("WARNING");
        std::cout << std::endl;
    h.complain("ERROR");
        std::cout << std::endl;
    h.complain("Random");
        std::cout << std::endl;
        
    return 0;
}


