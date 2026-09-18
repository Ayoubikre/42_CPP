// #include "Array.hpp"

template<typename X>
Array<X>::Array(): t(NULL), s1(0)
{
    ft_log("empty construct is created");
}

template<typename X>
Array<X>::Array(unsigned int n): s1(n)
{
    t = new X[n]();
    ft_log("X construct is created");
}

template<typename X>
Array<X>::Array(const Array& tmp)
{

}

template<typename X>
Array& Array<X>::operatore=(const Array& tmp)
{

}


template<typename X>
Array<X>::~Array()
{
    delete[] t;
}