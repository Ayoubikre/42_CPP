/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:35:07 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 18:13:50 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** ar)
{
    if(ac != 2)
        return (ft_log("Invalid Arguments"), 1);
    
    Harl h;
    h.complain(ar[1]);
        
    return 0;
}
