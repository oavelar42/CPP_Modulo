/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:59:29 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/05 21:35:09 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : weapon_1(Weapon)
{
    name_1 = name;
}

void HumanA::attack()
{
    std::cout << name_1 << GRE " attacks with his " OFF 
                        << weapon_1.getType() << 
                        std::endl;    
}