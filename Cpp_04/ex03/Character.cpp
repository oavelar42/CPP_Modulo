/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:13:02 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/03 17:10:28 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {  }

Character::Character(std::string const & name)
{
	name_c = name;
}

Character::Character(const Character& copy)
{
    *this = copy;
}

Character& Character::operator=(const Character& copy)
{
	if (this != &copy)
    {
		name_c = copy.name_c;
		for (int i = 0; i < 4; i++)
			_materia[i] = copy._materia[i]->clone();
	}
	return *this;
}

Character::~Character(void) {  }

std::string const & Character::getName() const{
	return this->name_c;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
    {
		if (_materia[i] == NULL)
        {
			_materia[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
    if (0 < idx && idx > 4)
		_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _materia[idx] != NULL)
		_materia[idx]->use(target);
}