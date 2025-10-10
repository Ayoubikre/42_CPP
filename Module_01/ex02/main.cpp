/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:04:27 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/10 17:51:30 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl

int	main(void)
{
	std::string t = "HI THIS IS BRAIN";
	std::string *t1 = &t;
	std::string &t2 = t;
	
	ft_log("");
	
	ft_log_("A : ");ft_log(&t);
	ft_log_("A : ");ft_log(t1);
	ft_log_("A : ");ft_log(&t2);
	
	ft_log("");

	ft_log_("V : ");ft_log(t);
	ft_log_("V : ");ft_log(*t1);
	ft_log_("V : ");ft_log(t2);

	ft_log("");
	
	return 0;
}
