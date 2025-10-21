/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:22:40 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/21 21:37:30 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// void t(){ 
//     ft_log("__________________________________");
//     system("leaks -q ex3"); 
// }

int main()
{
    // atexit(t);
    
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

    ft_log("__________________________________");
    
        ICharacter* me = new Character("me");
    
    ft_log("__________________________________");
    
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
    
    ICharacter* bob = new Character("bob");

    ft_log("__________________________________");
    
        me->use(0, *bob);
        me->use(1, *bob);
    
    ft_log("__________________________________");
    
        delete bob;
        delete me;
        delete src;

    return 0;
}
