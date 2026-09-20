template<typename X>
Array<X>::Array(): t(NULL), s1(0)
{
    ft_log("Default constructor called");
}

template<typename X>
Array<X>::Array(unsigned int n):t(NULL), s1(n)
{
    if(n>0)
        t = new X[n]();
    ft_log("Default_2 constructor called");
}

template<typename X>
Array<X>::Array(const Array& tmp):t(NULL),s1(tmp.s1)
{
    if(tmp.s1>0)
    {
        t=new X[tmp.s1]();
        for(unsigned int i=0;i<tmp.s1;i++)
            t[i]=tmp.t[i];
    }
    
    ft_log("copy constructor calle");
}

template<typename X>
Array<X>& Array<X>::operator=(const Array<X>& tmp)
{
    if(this != &tmp)
    {
        s1=tmp.s1;
        if(t)
        {
            delete[] t;
            t=NULL;
        }
        if(tmp.s1>0)
        {
            t=new X[tmp.s1]();
            for(unsigned int i=0; i<tmp.s1; i++)
                t[i]=tmp.t[i];
        }
    }
    ft_log("Copy assignment operator called");
    return *this;
}

template<typename X>
X& Array<X>::operator[](unsigned int i)
{
    if(i>=s1)
        throw std::out_of_range("Index is out of range");
    return t[i];
}

template<typename X>
const X& Array<X>::operator[](unsigned int i) const
{
    if(i>=s1)
        throw std::out_of_range("Index is out of range");
    return t[i];
}

template<typename X>
Array<X>::~Array()
{
    s1=0;
    if(t)
        delete[] t;
    ft_log("Default Distructor called");

}
template<typename X>
unsigned int Array<X>::size() const
{
    return s1;
}
