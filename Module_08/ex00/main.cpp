#include "easyfind.hpp"

int main()
{
    std::vector<int> t;

    t.push_back(1);
    t.push_back(2);
    t.push_back(3);
    t.push_back(4);
    t.push_back(5);
    t.push_back(6);

    try{
        ft_log(*easyfind(t, 3));
        ft_log(*easyfind(t, 100));
        
    }catch(std::exception& e)
    {
        ft_log("Error: " << e.what());
    }

    return 0;
}