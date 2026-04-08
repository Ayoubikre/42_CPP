#include "main.hpp"

// void t(){ system("leaks -q Ex"); }

int main()
{
    // atexit(t);

    ft_log("\n=========================================");
    ft_log("        1. SUBJECT BASIC TEST");
    ft_log("=========================================\n");

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);


    ft_log("\n=========================================");
    ft_log("        2. INVENTORY FULL TEST");
    ft_log("=========================================\n");

    tmp = src->createMateria("ice");
    me->equip(tmp); 
    tmp = src->createMateria("cure");
    me->equip(tmp); 

    AMateria* extra = src->createMateria("ice");
    me->equip(extra);
    delete extra; 


    ft_log("\n=========================================");
    ft_log("        3. UNEQUIP / FLOOR TEST");
    ft_log("=========================================\n");

    me->unequip(2); 
    me->use(2, *bob); 

    me->unequip(10);
    me->unequip(-1);


    delete me;
    delete bob;
    delete src;

    return 0;
}
