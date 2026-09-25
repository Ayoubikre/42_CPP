#include "Span.hpp"

Span::Span(unsigned int N):N(N)
{
}

Span::Span(const Span& tmp):N(tmp.N), t(tmp.t)
{
}

Span& Span::operator=(const Span& tmp)
{
    if(this!=&tmp)
    {
        t=tmp.t;
        N=tmp.N;
    }
    return *this;
}

Span::~Span()
{
}


void Span::addNumber(int n)
{
    if(t.size()>=N)
        throw std::runtime_error("the table is full");
    t.push_back(n);
}

int Span::shortestSpan()
{
    if(t.size()<2)
        throw std::runtime_error("you need at least 2 element");

    std::vector<int> tmp=t;

    std::sort(tmp.begin(),tmp.end());

    std::vector<int> tmp_2(tmp.size());
    std::adjacent_difference(tmp.begin(),tmp.end(),tmp_2.begin());

    return *std::min_element(tmp_2.begin()+1, tmp_2.end());
}

int Span::longestSpan()
{
    if(t.size()<2)
        throw std::runtime_error("you need at least 2 element");

    return (*std::max_element(t.begin(),t.end()) - *std::min_element(t.begin(),t.end()));
}


void Span::ft_print()
{
    for(unsigned int i=0; i<t.size(); i++)
        ft_log(t[i]);
}
