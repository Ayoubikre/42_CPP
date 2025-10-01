/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:34:52 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/01 12:57:53 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	void complain(std::string level);

};

#endif