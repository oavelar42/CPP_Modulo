/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:24:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/20 17:07:48 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name_1)
{
    std::cout << "Name constructor is called" << std::endl;
    name = name_1;
    hit_point = 10;
    energ_point = 10;
    att_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor is called" << std::endl;
    *this = copy;
}


ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor is called" << std::endl;
}

void ClapTrap::attack(std::string const& target)
{
    std::cout << "ClapTrap " << name << "attack " << target 
                << ", causing " << att_dmg << " point of damage" 
                << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << "is take " << amount << "points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << name << "is repaired " << amount << "points of UFC" << std::endl;
    hit_point += amount;

}