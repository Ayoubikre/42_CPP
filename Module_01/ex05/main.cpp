/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:35:07 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 18:09:37 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl h;
    
    h.complain("DEBUG");ft_log("");

    h.complain("INFO");ft_log("");

    h.complain("WARNING");ft_log("");

    h.complain("ERROR");ft_log("");

    h.complain("Random");ft_log("");
        
    return 0;
}


