/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:59:25 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/05 21:35:05 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
    weapon_1 = &weapon;
}

HumanB::HumanB(std::string name)
{
    name_1 = name;
}

void HumanB::attack()
{
    std::cout << name_1 << GRE " attacks with his " OFF 
                        << weapon_1->getType() << 
                        std::endl;    
}