#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    std::srand(std::time(NULL));
    
    Base *tmp = generate();
    identify(tmp);
    identify(*tmp);

    delete tmp;
    return 0;
}