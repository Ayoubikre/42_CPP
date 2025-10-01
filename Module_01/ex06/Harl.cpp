/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:34:54 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/01 13:42:29 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout<< "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
    std::cout<< "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didnt put enough bacon in my burger! If you did I wouldnt be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    std::cout<< "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nIve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error(void)
{
    std::cout<< "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;  
    }
}
