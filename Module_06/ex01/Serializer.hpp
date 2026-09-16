#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x <<std::endl

struct Data{
    int i;
    std::string name;
};


class Serializer{
    private:
        Serializer();
        Serializer(const Serializer& tmp);
        Serializer& operator=(const Serializer& tmp);
        ~Serializer();
        
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};