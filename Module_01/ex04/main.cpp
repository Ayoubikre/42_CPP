/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:09:36 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 18:07:05 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void ft_replace(std::ifstream& in_f, std::ofstream& out_f,std::string old, std::string nw)
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
            t.insert(i, nw);
            
            i=t.find(old, i+nw.length());
        }
        out_f << t << std::endl;
    }
}

int main(int ac, char **ar)
{
    if(ac!= 4)
        return (ft_log("Invalid Arguments"), 1);
    
    std::string in=ar[1];
    std::string out=in+".replace";
    
    std::ifstream in_f(in);
    if(!in_f)
        return (ft_log("Infile Error"), 1);
        
    std::ofstream out_f(out);
    if(!out_f)
        return (ft_log("Outfile Error"), 1);

    ft_replace(in_f, out_f, ar[2], ar[3]);

    return (in_f.close(),out_f.close(),0);
}
