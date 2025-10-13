/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:42:48 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/13 13:29:10 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void PhoneBook::ft_set_count() {count = 0;}
void PhoneBook::ft_mod_count(int i) {count += i;}
int PhoneBook::ft_get_count() {return count;}

int PhoneBook::ft_isdigit(std::string msg)
{
    int i=0;
    while(msg[i])
    {
        if(!isdigit(msg[i]))
            return 0;
        i++;
    }
    return 1;
}

std::string PhoneBook::ft_trunc(std::string t)
{
    if(t.size()>9)
        return (t.substr(0,9)+".");
    return t;
}

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

void PhoneBook::ft_print(int id ,int f)
{
    if(f==0)
    {
        std::cout << CYAN  << "===================================================\n" << RESET ;
        std::cout << YELLOW << std::setw(10)  << "Index"    << RESET  << " | "  ;
        std::cout << YELLOW << std::setw(10)   << "First Name"    << RESET  << " | "  ;
        std::cout << YELLOW << std::setw(10)   << "Last Name"    << RESET  << " | "  ;
        std::cout << YELLOW << std::setw(10)   << "NickName"    << RESET  << std::endl ;
        std::cout << CYAN  << "---------------------------------------------------\n" << RESET ;
    }
    else if(f==1)
    {
        std::cout << std::setw(10) << std::right << id << " | " ;
        std::cout << std::setw(10) << std::right << ft_trunc(t[id][0]) << " | " ;
        std::cout << std::setw(10) << std::right << ft_trunc(t[id][1]) << " | " ;
        std::cout << std::setw(10) << std::right << ft_trunc(t[id][2]) << std::endl ;
    }
    else
    {
        std::cout << "First Name     : " << t[id][0] << std::endl;
        std::cout << "Last Name      : " << t[id][1] << std::endl;
        std::cout << "NickName       : " << t[id][2] << std::endl;
        std::cout << "Phone Number   : " << t[id][3] << std::endl;
        std::cout << "Darkest Secret : " << t[id][4] << std::endl;
                    
    }
}

std::string PhoneBook::ft_ask(std::string msg, int f, int max)
{
    std::string tmp;

    while(1)
    {
        std::cout << msg;
        std::getline(std::cin , tmp);
        
        if(f==0 && !tmp.empty())
            break;
        if(f==1 && !tmp.empty() && ft_isdigit(tmp))
            break;
        if(f==2 && !tmp.empty() && ft_isdigit(tmp) && 0 <= std::atoi(tmp.c_str()) && std::atoi(tmp.c_str()) < max)
            break;
            
        if(f==2)
            std::cout << RED << "\tInvalid Index\n" << RESET;  
        else
            std::cout << RED << "\tInvalid Key Word\n" << RESET;
    }
    return tmp;
}

void PhoneBook::ft_add()
{
    int x;
    Contact contact;
    
    std::cout << "Pleas enter contact info : \n";
    contact.set_first_n(ft_ask("First Name     : ", 0,0));
    contact.set_last_n(ft_ask("Last Name      : ", 0,0));
    contact.set_nick_n(ft_ask("NickName       : ", 0,0));
    contact.set_phone_n(ft_ask("Phone Number   : ", 1,0));
    contact.set_darkest_S(ft_ask("Darkest Secret : ", 0,0));
    std::cout << std::endl;
    x=ft_get_count()%8;
    t[x][0]=contact.get_first_n();
    t[x][1]=contact.get_last_n();
    t[x][2]=contact.get_nick_n();
    t[x][3]=contact.get_phone_n();
    t[x][4]=contact.get_darkest_S();
    ft_mod_count(1);
}

void PhoneBook::ft_search()
{
    int j;
    int max;

    if(ft_get_count()==0)
        std::cout << "No contact Found\n";
    else
    {
        max=ft_get_count();
        if(max>8) { max = 8;}
        ft_print(0,0);
        for(int i=0; i<max; i++)
            ft_print(i, 1);
        std::cout << CYAN  << "===================================================\n" << RESET ;
        j=std::atoi(ft_ask("\nEnter Id       : ", 2,max).c_str());
        ft_print(j,2);
    }
    std::cout << std::endl;
}

void PhoneBook::ft_exit()
{
    std::cout << BOLD << GREEN << "         Have a Nice Day!      \n" << RESET;
    std::exit(0);
}
