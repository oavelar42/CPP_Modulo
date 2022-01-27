/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 22:45:57 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/27 18:27:24 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap constructor is called " << std::endl;
}

ScavTrap::ScavTrap(std::string const name_1)
{
    std::cout << "ScavTrap constructor is called " << std::endl;
    name = name_1;
    hitpoints = 100;
    energy = 50;
    attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "Copy constructor is called " << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    ClapTrap::operator=(copy);
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor is called " << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
    std::cout << "ScavTrap " << name << "attack " << target 
                << ", almost " << attack_dmg << " kill BTC!" 
                << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << name << " made stocks with as crypto!"
		<< std::endl;
}