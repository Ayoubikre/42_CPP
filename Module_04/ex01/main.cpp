#include "main.hpp"

// void t(){ system("leaks -q Ex"); }

int main()
{
    // atexit(t);
    const Cat* x = new Cat();
    const Cat* y = new Cat(*x);

    ft_log("__________________");

        x->ft_print_ideas();

    ft_log("__________________");

        y->ft_print_ideas();

    ft_log("__________________");

    delete x;
    delete y;

    ft_log("__________________");
    return 0;
}