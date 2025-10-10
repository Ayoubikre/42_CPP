/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:34:54 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 18:16:01 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    ft_log("[ DEBUG ]");
    ft_log("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!");
}
void Harl::info(void)
{
    ft_log("[ INFO ]");
    ft_log("I cannot believe adding extra bacon costs more money.\nYou didnt put enough bacon in my burger! If you did I wouldnt be asking for more!");
}
void Harl::warning(void)
{
    ft_log("[ WARNING ]");
    ft_log("I think I deserve to have some extra bacon for free.\nIve been coming for years, whereas you started working here just last month.");
}
void Harl::error(void)
{
    ft_log("[ ERROR ]");
    ft_log("This is unacceptable! I want to speak to the manager now.");
}


void Harl::complain(std::string level)
{
    int i=-1;
    std::string t[]={"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[])(void) = {&Harl::debug, &Harl::info , &Harl::warning , &Harl::error};
    
    while(++i<4)
    {
        if(level==t[i])
            break;
    }

    switch(i)
    {
        case(0):
            (this->*f[0])(); std::cout << std::endl;
        case(1):
            (this->*f[1])(); std::cout << std::endl;
        case(2):
            (this->*f[2])(); std::cout << std::endl;
        case(3):
            (this->*f[3])(); break;
        default:
            ft_log("[ Probably complaining about insignificant problems ]");
    }
}
