#include "main.hpp"

Brain::Brain()
{
    ft_log("Brain Default constructor called");
    for (int i=0; i<100; i++)
        ideas[i]="Zzzzzz......";
}

Brain::Brain(const Brain& tmp)
{
    ft_log("Brain copy constructor called");
    for (int i=0; i<100; i++)
        ideas[i]=tmp.ideas[i];
}

Brain& Brain::operator=(const Brain& tmp)
{
    ft_log("Brain Copy assignment operator called");
    if(this != &tmp)
    {
        for (int i=0; i<100; i++)
            ideas[i]=tmp.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    ft_log("Brain Default Distructor called");
}

void Brain::ft_print_ideas() const
{
    for (int i=0; i<10; i++)
        ft_log(ideas[i]);
}
