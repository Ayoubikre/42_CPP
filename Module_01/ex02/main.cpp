/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:04:27 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/13 14:38:29 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

int	main(void)
{
	std::string t = "HI THIS IS BRAIN";
	std::string *stringPTR = &t;
	std::string &stringREF = t;
	
	ft_log("");
	
	ft_log_("A : ");ft_log(&t);
	ft_log_("A : ");ft_log(stringPTR);
	ft_log_("A : ");ft_log(&stringREF);
	
	ft_log("");

	ft_log_("V : ");ft_log(t);
	ft_log_("V : ");ft_log(*stringPTR);
	ft_log_("V : ");ft_log(stringREF);

	ft_log("");
	
	return 0;
}
