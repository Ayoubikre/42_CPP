#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

int main()
{
    srand(time(NULL));
    
    Base *tmp = generate();
    identify(tmp);
    identify(*tmp);

    delete tmp;
    return 0;
}