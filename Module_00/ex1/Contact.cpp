/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 02:36:28 by noctis            #+#    #+#             */
/*   Updated: 2025/09/28 03:02:11 by noctis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void Contact::set_first_n(std::string t) {first_n=t;}
void Contact::set_last_n(std::string t) {last_n =t;}
void Contact::set_nick_n(std::string t) {nick_n=t;}
void Contact::set_phone_n(std::string t) {phone_n =t;}
void Contact::set_darkest_S(std::string t) {darkest_S=t;}

std::string Contact::get_first_n() {return first_n;}
std::string Contact::get_last_n() {return last_n;}
std::string Contact::get_nick_n() {return nick_n;}
std::string Contact::get_phone_n() {return phone_n;}
std::string Contact::get_darkest_S() {return darkest_S;}
