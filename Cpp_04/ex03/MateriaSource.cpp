/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:32:05 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/28 15:17:37 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) 
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
		{
			delete _materia[i];
			_materia[i] = NULL;
		}
		_materia[i] = copy._materia[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& copy) 
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
		{
			delete _materia[i];
			_materia[i] = NULL;
		}
		_materia[i] = copy._materia[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) 
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
		{
			delete _materia[i];
			_materia[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			return ;
		}
	}
}
AMateria* MateriaSource::createMateria(const std::string& type)
{
	if (type != "ice" && type != "cure")
		return 0;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	//std::cout << "Materia " << type << " preciso do output do subject" << std::endl;
	return (NULL);
}