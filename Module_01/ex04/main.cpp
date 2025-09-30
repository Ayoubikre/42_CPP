/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:09:36 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/30 19:32:18 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void ft_replace(std::ifstream& in_f, std::ofstream& out_f,std::string old, std::string neww)
{
    size_t i;
    std::string t; 
    
    if(old.empty())
        return ;
    while(std::getline(in_f,t))
    {
        i=t.find(old);
        while(i != std::string::npos)
        {
            t.erase(i, old.length());
            t.insert(i, neww);
            
            i=t.find(old, i+neww.length());
        }
        out_f << t << std::endl;
    }
}


int main(int ac, char **ar)
{
    if(ac!= 4)
    {
        std::cout << "Invalid Arguments\n";
        return 1;
    }
    
    std::string in=ar[1];
    std::string out=in+".replace";
    
    std::ifstream in_f(in);
    if(!in_f)
    {
        std::cout << "Infile Error\n";
        return 1;
    }
    
    std::ofstream out_f(out);
    if(!out_f)
    {
        std::cout << "Outfile Error\n";
        return 1;
    }

    ft_replace(in_f, out_f, ar[2], ar[3]);

    in_f.close();
    out_f.close();
    return 0;
}
