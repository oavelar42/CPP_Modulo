/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:32:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/30 21:42:48 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& copy)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = copy._materia[i]->clone();
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++){
		if (this->_materia[i] != NULL){
			delete this->_materia[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (this->_materia[i] == NULL){
			this->_materia[i] = m;
			break;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type){
	if (type != "ice" && type != "cure")
		return 0;
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] && !this->_materia[i]->getType().compare(type))
			return this->_materia[i]->clone();
	return 0;
}