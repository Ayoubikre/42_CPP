#include "whatever.hpp"

int main( void ) {

    int a = 2;
    int b = 3;

    ::swap(a, b);

    ft_log("a = " << a << ", b = " << b);
    ft_log("min( a, b ) = " << ::min( a, b ));
    ft_log("max( a, b ) = " << ::max( a, b ));


    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    ft_log("c = " << c << ", d = " << d);
    ft_log("min( c, d ) = " << ::min( c, d ));
    ft_log("max( c, d ) = " << ::max( c, d ));

    return 0;
}