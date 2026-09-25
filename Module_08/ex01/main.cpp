#include "Span.hpp"

int main()
{

    try{
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        ft_log( sp.shortestSpan() );
        ft_log( sp.longestSpan() );

    }catch(std::exception& e)
    {
        ft_log(e.what());
    }

            ft_log("------------------------");

    try{
        unsigned int s =10000;
        Span sp = Span(s);

        for(unsigned int i=0; i<s-3;i++)
            sp.addNumber(i);

        ft_log( sp.shortestSpan() );
        ft_log( sp.longestSpan() );

        
        std::list<int> ls;
        for(unsigned int i=0; i<3;i++)
            ls.push_back(i);
        
        sp.ft_fill(ls.begin(), ls.end());
        
        // sp.ft_print();

    }catch(std::exception& e)
    {
        ft_log(e.what());
    }


    return 0;
}