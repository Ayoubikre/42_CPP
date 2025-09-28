/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 02:03:02 by noctis            #+#    #+#             */
/*   Updated: 2025/09/28 21:50:29 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void PhoneBook::ft_greeting()
{

    std::cout << CYAN  << "========================================\n" << RESET;
    std::cout << BOLD << GREEN << "         Welcome to the PhoneBook!      \n" << RESET;
    std::cout << CYAN  << "----------------------------------------\n" << RESET;
    std::cout << BOLD << "Available commands:\n" << RESET;
    std::cout << "  " << YELLOW << "ADD"    << RESET << "    - Add a new contact\n";
    std::cout << "  " << YELLOW << "SEARCH" << RESET << " - Search for a contact\n";
    std::cout << "  " << YELLOW << "EXIT"   << RESET << "   - Quit the program\n";
    std::cout << CYAN  << "========================================\n" << RESET;
    std::cout << std::endl;
}

void PhoneBook::ft_set_count() {count = 0;}
void PhoneBook::ft_mod_count(int i) {count += i;}
int PhoneBook::ft_get_count() {return count;}

void PhoneBook::ft_add()
{
    
}

void PhoneBook::ft_search()
{
    if(ft_get_count==0)
        std::cout << "No contact Found\n";
    else
    {
        for(int i=0; i<ft_get_count(); i++)
        {
            
        }
    }
}

void PhoneBook::ft_exit()
{
    std::cout << BOLD << GREEN << "         By By PhoneBook!      \n" << RESET;
    std::exit(0);
}

int main()
{
    PhoneBook phone;
    std::string t;
    
    phone.ft_greeting();
    phone.ft_set_count();
    while(1)
    {
        std::cout << "  " << MAGENTA << "Enter the Command : " << RESET;
        getline(std::cin, t);
        if(t=="ADD")
            phone.ft_add();
        else if(t=="SEARCH")
            phone.ft_search();
        else if(t=="EXIT")
            phone.ft_exit();
        else
            std::cout << RED << "\tInvalid Key Word\n" << RESET;
    }    
    return 0;
}
