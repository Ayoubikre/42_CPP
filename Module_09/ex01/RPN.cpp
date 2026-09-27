#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& tmp): t(tmp.t) {}

RPN& RPN::operator=(const RPN& tmp)
{
    if(this != &tmp)
        t=tmp.t;

    return *this;
}

RPN::~RPN(){}

int RPN::ft_validate(std::string tmp)
{
    if(tmp.size() != 1)
        return 0;
    if(!(std::isdigit(tmp[0]) || tmp[0]=='+'|| tmp[0]=='-'|| tmp[0]=='*'|| tmp[0]=='/'))
        return 0;
    return 1;
}

        
int RPN::ft_calcule(std::string str)
{
    std::stringstream in(str);
    std::string tmp;

    int n1;
    int n2;
    char c;

    while(in >> tmp)
    {
        if(!ft_validate(tmp))
            throw std::runtime_error("Error: Invalid String");
        
        c = tmp[0];

        if(std::isdigit(c))
        {
            t.push(c - '0');
        }
        else
        {
            if(t.size()<2)
                throw std::runtime_error("Error: Invalid String");

            n1=t.top(); t.pop();
            n2=t.top(); t.pop();

            if(c=='+')
                t.push(n2 + n1);
            else if(c=='-')
                t.push(n2 - n1);
            else if(c=='*')
                t.push(n2 * n1);
            else if(c=='/')
            {
                if(n1==0)
                    throw std::runtime_error("Error: Division by 0");
                t.push(n2 / n1);
            }
        }
    }

    if(t.size()!=1)
        throw std::runtime_error("Error: Invalid String");
    
    return t.top();
}