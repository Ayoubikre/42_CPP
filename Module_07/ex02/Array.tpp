// #include "Array.hpp"

template<typename X>
Array<X>::Array(): t(NULL), s1(0)
{
    ft_log("empty construct is run");
}

template<typename X>
Array<X>::Array(unsigned int n): s1(n)
{
    t = new X[n]();
    ft_log("X construct is run");
}

template<typename X>
Array<X>::Array(const Array& tmp):s1(tmp.s1)
{

    t=new X[tmp.s1]();
    for(unsigned int i=0;i<tmp.s1;i++)
        t[i]=tmp.t[i];

    ft_log("copy construct is run");
}

template<typename X>
Array<X>& Array<X>::operator=(const Array<X>& tmp)
{
    if(this != &tmp)
    {
        delete[] t;
        s1=tmp.s1;
        t=new X[s1]();
        for(unsigned int i=0; i<s1; i++)
            t[i]=tmp.t[i];
    }
    ft_log(" '=' operator is run");
    return *this;
}

template<typename X>
Array<X>& Array<X>::operator[](const Array& tmp)
{

}

template<typename X>
Array<X>::~Array()
{
    delete[] t;
    s1=0;
    ft_log(" deconstractore is run");

}
template<typename X>
unsigned int Array<X>::size() const
{
    return s1;
}
