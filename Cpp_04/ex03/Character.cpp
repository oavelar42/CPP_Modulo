/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:13:02 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/02 23:10:25 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {  }

Character::Character(std::string const & name)
{
    name_c = name;
    /*for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;*/
}

Character::Character(Character const& copy)
{
    *this = copy;
   /*name_c = copy.name_c;
	for(int i = 0; i < 4; i++)
		this->_materia[i] = copy._materia[i]->clone();*/
}

Character& Character::operator=(Character const& copy)
{
    if (this != &copy)
    {
        name_c = copy.name_c;
        for (int i = 0; i < 4; i++)
        {
            _materia[i] = copy._materia[i];
        }
    }
    return (*this);
}

Character::~Character(void) { }

std::string const& Character::getName() const
{
    return name_c;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
    {
		if (this->_materia[i] == NULL)
        {
			_materia[i] = m;
			return ;
		}
	}
}


void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4){
		return;
    }
    for (int i = idx; i < 4 - 1; i++){
        _materia[i] = _materia[i + 1];
    }
}

void Character::use(int idx, ICharacter& target)
{
   if (idx >= 0 && idx < 4 && this->_materia[idx] != NULL)
		this->_materia[idx]->use(target);
}