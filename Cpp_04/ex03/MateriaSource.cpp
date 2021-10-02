/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:32:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/02 22:55:38 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) { }

MateriaSource::MateriaSource(MateriaSource const& copy)
{
	*this = copy;
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

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++){
		if (_materia[i])
			delete (_materia[i]);
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++) {
		if (!_materia[i]) {
			std::cout << m->getType() << " aprendeu, mais ainda nao volta output" << std::endl;
			_materia[i] = m;
			return ;
		}
	}
	delete m;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++) {
		if (_materia[i] && _materia[i]->getType() == type) {
			return (_materia[i]);
		}
	}
	std::cout << "Materia " << type << " preciso do output do subject" << std::endl;
	return (0);
}