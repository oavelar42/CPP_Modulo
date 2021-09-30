/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:13:02 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/30 16:30:17 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {  }

Character::Character(std::string const & name)
{
    name_c = name;
}

Character::Character(Character const& copy)
{
    *this = copy;
}

Character& Character::operator=(Character const& copy)
{
    if (this != &copy)
    {
        this->name_c = copy.name_c;
        for (int i = 0; i < 4; i++)
            this->_materia[i] = copy._materia[i]->clone();
    }
    return (*this);
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
        if (_materia[i] != NULL)
            delete _materia[i];
}

std::string const& Character::getName() const
{
    return (name_c);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
    {
		if (this->_materia[i] == NULL)
        {
			this->_materia[i] = m;
			break;
		}
	}
}


void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        _materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >=0 && idx < 4 && _materia[idx] != NULL)
        _materia[idx]->use(target);
}