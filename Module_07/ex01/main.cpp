#include "iter.hpp"

void ft_p(int a)
{
    ft_log("print -> " << a);
}

int main( void ) {
        int *c=new int[3];

    for(int i=0;i<3;i++)
        c[i]=i+1;

    ::iter(c, 3, ft_p);
    
    delete[] c;
    return 0;
}