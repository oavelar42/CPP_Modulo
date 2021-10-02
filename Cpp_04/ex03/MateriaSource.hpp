/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:32:02 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/02 22:00:39 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include <cmath>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public :
    
            MateriaSource(void);
            MateriaSource(MateriaSource const& copy);
            MateriaSource& operator=(MateriaSource const& copy);
            ~MateriaSource(void);

            void learnMateria(AMateria* m);
            AMateria* createMateria(std::string const& type);

    protected :

             AMateria* _materia[4];
};

#endif