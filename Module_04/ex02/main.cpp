#include "main.hpp"

// void t(){ system("leaks -q Ex"); }

int main()
{
    // atexit(t);
    const Animal* i = new Cat();
    // const Animal* i = new Animal();

    ft_log("__________________");

        ft_log(i->getType());
        i->makeSound();

    ft_log("__________________");

    delete i;
    return 0;
}