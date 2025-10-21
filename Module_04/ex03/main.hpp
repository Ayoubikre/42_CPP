/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:22:47 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/21 18:29:26 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <string>

#define ft_log_(x) std::cout << x
#define ft_log(x) std::cout << x << std::endl


#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include "ICharacter.hpp"
#include "Character.hpp"

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int		main();


#endif


// AMateria
//     ice
//     cure


// charchter
// ICharacter

// MateriaSource
// IMateriaSource