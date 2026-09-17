#include "iter.hpp"
#include <string>

int main( void ) {
    int *c=new int[3];

    for(int i=0;i<3;i++)
        c[i]=i+1;

    ::iter(c, 3, ft_pr<int>);
    
    delete[] c;

    ft_log("-----------");

    std::string *g = new std::string[3];

    for(int i=0;i<3;i++)
        g[i]="hy";
    
    ::iter(g, 3, ft_pr<std::string>);

    delete[] g;

    return 0;
}