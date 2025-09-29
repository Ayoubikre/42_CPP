/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 03:03:51 by noctis            #+#    #+#             */
/*   Updated: 2025/09/29 14:54:08 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
  private:
	std::string t[8][5];
	int count;

  public:
	void ft_greeting();
	void ft_print(int id, int f);
	std::string ft_ask(std::string msg, int f, int max);
	std::string ft_trunc(std::string t);
	void ft_add();
	void ft_search();
	void ft_exit();
	void ft_set_count();
	void ft_mod_count(int i);
	int ft_get_count();
	int ft_isdigit(std::string msg);
};

#endif