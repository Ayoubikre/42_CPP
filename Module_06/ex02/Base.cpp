#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int n=std::rand() % 3;
    Base* tmp = NULL;

    if(n==0)
        tmp = new A;
    else if(n==1)
        tmp = new B;
    else
        tmp = new C;

    return tmp;
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        ft_log("pointer : 'A'");
    else if (dynamic_cast<B*>(p))
        ft_log("pointer : 'B'");
    else if (dynamic_cast<C*>(p))
        ft_log("pointer : 'C'");
    else
        ft_log("type not found");
}

void identify(Base& p)
{
    try{
        A& a=dynamic_cast<A&>(p);
        static_cast<void>(a);
        ft_log("reference : 'A'");
    }catch(std::exception& e)
    {
    }

    try{
        B& b=dynamic_cast<B&>(p);
        static_cast<void>(b);
        ft_log("reference : 'B'");
    }catch(std::exception& e)
    {
    }

    try{
        C& c=dynamic_cast<C&>(p);
        static_cast<void>(c);
        ft_log("reference : 'C'");
    }catch(std::exception& e)
    {
    }
}
