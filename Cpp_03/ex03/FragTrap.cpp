/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:24:23 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 16:13:51 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap constructor is called " << std::endl;
    hitpoints = 100;
    energy = 100;
    attack_dmg = 30;
}

FragTrap::FragTrap(std::string const name_1)
{
    std::cout << "FragTrap constructor is called " << std::endl;
    name = name_1;
    hitpoints = 100;
    energy = 100;
    attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "Copy constructor is called " << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    ClapTrap::operator=(copy);
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor is called " << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << ", Let's rise to super heights to show who we are!"
		<< std::endl;
}
