/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:24:51 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/21 19:01:58 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "main.hpp"

class MateriaSource: public IMateriaSource{
    private:
        AMateria* t[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& tmp);
        MateriaSource& operator=(const MateriaSource& tmp);
        ~MateriaSource();
        
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif