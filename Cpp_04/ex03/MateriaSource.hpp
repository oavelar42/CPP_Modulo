/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:32:02 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/03 17:08:38 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
        private:

                AMateria* _materia[4];

        public:

                MateriaSource(void);
                MateriaSource(const MateriaSource& copy);
                MateriaSource& operator=(const MateriaSource& copy);
                virtual ~MateriaSource(void);

                void learnMateria(AMateria* m);
                AMateria* createMateria(std::string const & type);

};

#endif