/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:35:54 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 16:14:13 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap constructor is called " << std::endl;
    hitpoints = FragTrap::hitpoints;
    energy = ScavTrap::energy;
    attack_dmg = FragTrap::attack_dmg;
}

DiamondTrap::DiamondTrap(std::string const name_1) 
{
    std::cout << "DiamondTrap constructor is called " << std::endl;
    name = name_1;
    ClapTrap::name = name + "_clap_name ";
    hitpoints = FragTrap::hitpoints;
    energy = ScavTrap::energy;
    attack_dmg = FragTrap::attack_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) :  ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "Copy constructor is called " << std::endl;
    *this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
    std::cout << "DiamondTrap assignation operator is called\n";
	ClapTrap::operator=(copy);
	name = copy.name;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor is called " << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap " << name << " We are the ones who will dominate the world!"
		<< std::endl;
}