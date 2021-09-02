/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:17:15 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/02 14:48:06 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
    name_1 = name;
    std::cout   << RED "Hey bro.. " OFF << name_1 
                << RED ", Want drinks ?" OFF << std::endl;
}

Zombie::~Zombie()
{
    std::cout   << name_1 
                << ", say : " OTA "I'm gonna eat your brain!" OFF 
                << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name_1 << GRE " BraiiiiiiinnnzzzZ... " OFF << std::endl;
}