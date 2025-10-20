/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:22:40 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/20 13:12:40 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// void t(){ system("leaks -q ex0"); }

int main()
{
    // atexit(t);
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const Animal* meta = new Animal();
    
    ft_log("__________________");
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    ft_log("__________________");
    
    delete i;
    delete j;
    delete meta;
    
    ft_log("__________________");
    ft_log("__________________");
    ft_log("__________________");


    const WrongAnimal* W_i = new WrongCat();
    const WrongAnimal* W_meta = new WrongAnimal();
    
    ft_log("__________________");
    
    std::cout << W_i->getType() << " " << std::endl;
    std::cout << W_meta->getType() << " " << std::endl;
    
    W_i->makeSound();
    W_meta->makeSound();

    ft_log("__________________");

    delete W_i;
    delete W_meta;
    
    ft_log("__________________");

    return 0;
}