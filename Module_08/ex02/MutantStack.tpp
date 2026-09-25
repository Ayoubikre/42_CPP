template<typename X>
MutantStack<X>::MutantStack()
{
}

template<typename X>
MutantStack<X>::MutantStack(const MutantStack& tmp) : std::stack<X>(tmp)
{
}

template<typename X>
MutantStack<X>& MutantStack<X>::operator=(const MutantStack& tmp)
{
    if(this != &tmp)
        this->c=tmp.c;

    return *this;
}

template<typename X>
MutantStack<X>::~MutantStack()
{
}

template<typename X>
typename MutantStack<X>::iterator MutantStack<X>::begin()
{
    return this->c.begin();
}

template<typename X>
typename MutantStack<X>::const_iterator MutantStack<X>::begin() const
{
    return this->c.begin();
}

template<typename X>
typename MutantStack<X>::iterator MutantStack<X>::end()
{
    return this->c.end();
}

template<typename X>
typename MutantStack<X>::const_iterator MutantStack<X>::end() const
{
    return this->c.end();
}

template<typename X>
typename MutantStack<X>::reverse_iterator MutantStack<X>::rbegin()
{
    return this->c.rbegin();
}

template<typename X>
typename MutantStack<X>::const_reverse_iterator MutantStack<X>::rbegin() const
{
    return this->c.rbegin();
}

template<typename X>
typename MutantStack<X>::reverse_iterator MutantStack<X>::rend()
{
    return this->c.rend();
}

template<typename X>
typename MutantStack<X>::const_reverse_iterator MutantStack<X>::rend() const
{
    return this->c.rend();
}
