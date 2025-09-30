/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:08:40 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/30 19:36:29 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <string>
# include <fstream>

int		main(int ac, char **ar);
void	ft_replace(std::ifstream &in_f, std::ofstream &out_f, std::string old, std::string neww);

#endif