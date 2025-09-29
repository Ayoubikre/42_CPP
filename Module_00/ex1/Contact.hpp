/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 02:27:43 by noctis            #+#    #+#             */
/*   Updated: 2025/09/29 13:17:27 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
  private:
	std::string first_n;
	std::string last_n;
	std::string nick_n;
	std::string phone_n;
	std::string darkest_S;

  public:
	void set_first_n(std::string t);
	void set_last_n(std::string t);
	void set_nick_n(std::string t);
	void set_phone_n(std::string t);
	void set_darkest_S(std::string t);
	std::string get_first_n();
	std::string get_last_n();
	std::string get_nick_n();
	std::string get_phone_n();
	std::string get_darkest_S();
};

#endif