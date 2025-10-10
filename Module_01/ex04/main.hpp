/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:08:40 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 18:02:21 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <string>
# include <fstream>

#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

int		main(int ac, char **ar);
void	ft_replace(std::ifstream &in_f, std::ofstream &out_f, std::string old, std::string neww);

#endif