#pragma once

#include "main.hpp"

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        Brain(const Brain& tmp);
        Brain& operator=(const Brain &tmp);
        ~Brain();

        void ft_print_ideas() const ; 
};