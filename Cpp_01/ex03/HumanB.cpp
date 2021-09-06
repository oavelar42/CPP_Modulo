/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:59:25 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/06 19:10:44 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
    weapon_b = &weapon;
}

HumanB::HumanB(std::string name)
{
    name_b = name;
}

void HumanB::attack()
{
    std::cout << name_b << GRE " attacks with his " OFF 
                        << weapon_b->getType() << 
                        std::endl;    
}