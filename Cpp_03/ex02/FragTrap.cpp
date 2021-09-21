/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:24:23 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/21 23:03:00 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap contructor is called" << std::endl;
}

FragTrap::FragTrap(std::string const name_1)
{
    std::cout << "Name constructor is called" << std::endl;
    name = name_1;
    hitpoints = 100;
    energy = 100;
    attack_dmg = 30;
}

FragTrap::FragTrap(FragTrap const& copy) : ClapTrap(copy)
{
    std::cout << "Copy FragTrap constructor is called" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor is called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    name = copy.name;
    hitpoints = copy.hitpoints;
    energy = copy.energy;
    attack_dmg = copy.attack_dmg;
    return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " He took everything i had!"
		<< std::endl;
}
