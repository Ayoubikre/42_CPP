/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 02:03:02 by noctis            #+#    #+#             */
/*   Updated: 2025/09/29 14:51:10 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	PhoneBook	phone;

	std::string t;
	phone.ft_greeting();
	phone.ft_set_count();
	while (1)
	{
		std::cout << MAGENTA << "Enter the Command : " << RESET;
		getline(std::cin, t);
		if (t == "ADD")
			phone.ft_add();
		else if (t == "SEARCH")
			phone.ft_search();
		else if (t == "EXIT")
			phone.ft_exit();
		else
			std::cout << RED << "\tInvalid Key Word\n" << RESET;
	}
	return (0);
}
