/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:35:54 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/25 20:39:32 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap Constructor is called " << std::endl;
    hitpoints = FragTrap::hitpoints;
    energy = ScavTrap::energy;
    attack_dmg = FragTrap::attack_dmg;
}

DiamondTrap::DiamondTrap(std::string const name_1)
{
    std::cout << "DiamondTrap constructor is called " << std::endl;
    name = name_1;
    ClapTrap::name = name + "Ota";
    this->hitpoints = FragTrap::hitpoints;
    this->energy = ScavTrap::energy;
    this->attack_dmg = FragTrap::attack_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    std::cout << "Copy constructor is called " << std::endl;
    *this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
    std::cout << "DiamondTrap assignation operator is called\n";
	this->ClapTrap::operator=(copy);
	this->name = copy.name;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor is called " << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap " << name << " aaaahahdasflaksjfklasjflka!"
		<< std::endl;
}