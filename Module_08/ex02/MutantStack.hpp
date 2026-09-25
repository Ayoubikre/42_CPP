#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <stack>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x <<std::endl

template<typename X>
class MutantStack : public std::stack<X>
{
    public:
        MutantStack();
        MutantStack(const MutantStack& tmp);
        MutantStack& operator=(const MutantStack& tmp);
        ~MutantStack();

        typedef typename std::stack<X>::container_type::iterator iterator;
        typedef typename std::stack<X>::container_type::const_iterator const_iterator;
        typedef typename std::stack<X>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<X>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin();
        const_iterator begin() const;

        iterator end();
        const_iterator end() const;

        reverse_iterator rbegin();
        const_reverse_iterator rbegin() const;

        reverse_iterator rend();
        const_reverse_iterator rend() const;
};  

#include "MutantStack.tpp"