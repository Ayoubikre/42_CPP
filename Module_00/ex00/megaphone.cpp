/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 00:25:52 by noctis            #+#    #+#             */
/*   Updated: 2025/09/29 17:50:14 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **ar)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; ar[i]; i++)
			for (int j = 0; ar[i][j]; j++)
				std::cout << (char)(std::toupper(ar[i][j]));
		std::cout << std::endl;
	}
	return (0);
}
