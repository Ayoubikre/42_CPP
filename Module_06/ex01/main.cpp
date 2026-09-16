#include "Serializer.hpp"

int main()
{
    Data* tmp = new Data;

    tmp->i=1;
    tmp->name="asdf";

    ft_log(tmp);
    ft_log(tmp->i);
    ft_log(tmp->name);
    ft_log("----------------");

    ft_log(Serializer::serialize(tmp));
    ft_log("----------------");
    Data* t = Serializer::deserialize(Serializer::serialize(tmp));

    ft_log(t);
    ft_log(t->i);
    ft_log(t->name);
    ft_log("----------------");

    if(t==tmp)
        ft_log("address match");
    else
        ft_log("address dont match");

    delete tmp;
    return 0;
}