/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:17:45 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/02 17:34:02 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void){}

void Zombie::getName(std::string name)
{
    name_1 = name;
}

Zombie::Zombie(std::string name)
{
    name_1 = name;
    std::cout << "Hey bro..." << name_1 << std::endl;
}

Zombie::~Zombie()
{
    std::cout << OTA "Zombie: " OFF << name_1 << RED ": read from back to front.." OFF << std::endl;
}

void Zombie::announce(void)
{
    std::cout << OTA "Zombie test: " OFF << name_1 << GRE ": BraiiiiiiinnnzzzZ..." OFF << std::endl;
}