/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:24:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 16:13:06 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap constructor is called " << std::endl;
}

ClapTrap::ClapTrap(std::string const name_1)
{
    std::cout << "ClapTrap constructor is called " << std::endl;
    name = name_1;
    hitpoints = 10;
    energy = 10;
    attack_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor is called " << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    name = copy.name;
    hitpoints = copy.hitpoints;
    energy = copy.energy;
    attack_dmg = copy.attack_dmg;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Claptrap destructor is called " << std::endl;
}

void ClapTrap::attack(std::string const& target)
{
    std::cout << "ClapTrap " << name << "attack " << target 
                << ", causing " << attack_dmg << " points of damage!" 
                << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << "is take " 
                << amount << " points of damage!" << std::endl;
    hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << name << "is repaired " 
                << amount << " points!" << std::endl;
    hitpoints += amount;
}