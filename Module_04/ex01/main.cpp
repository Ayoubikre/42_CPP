/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:22:40 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 14:08:23 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// void t(){ system("leaks -q ex1"); }

int main()
{
    // atexit(t);
    
    const Animal* t[100] ;
    
    for(int i=0;i<2;i++)
        t[i] = new Cat();
        
    for(int i=2;i<4;i++)
        t[i] = new Dog();
            
    for(int i=0;i<4;i++)
        t[i]->makeSound();    
        
    for(int i=0;i<4;i++)
        delete t[i];    

    return 0;
}