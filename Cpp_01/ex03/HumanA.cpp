/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:59:29 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/06 18:51:23 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : weapon_a(Weapon)
{
    name_a = name;
}

void HumanA::attack()
{
    std::cout << name_a << GRE " attacks with his " OFF 
                        << weapon_a.getType() << 
                        std::endl;    
}