/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:32:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/03 17:10:42 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) { }

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = copy._materia[i]->clone();
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& copy) 
{
	if (this == &copy)
		return *(this);
	for (int i = 0; i < 4; i++) {
		if (copy._materia[i])
			_materia[i] = copy._materia[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) { }

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
		{
			//std::cout << m->getType() << " aprendeu, mais ainda nao volta output" << std::endl;
			_materia[i] = m;
			return;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type != "ice" && type != "cure")
		return 0;
	for (int i = 0; i < 4; i++)
		if (_materia[i] && !_materia[i]->getType().compare(type))
			return _materia[i]->clone();
	//std::cout << "Materia " << type << " preciso do output do subject" << std::endl;
	return 0;
}