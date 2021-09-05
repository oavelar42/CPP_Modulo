/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:59:13 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/05 21:15:22 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType(void)
{
    return type_1;
}

Weapon::Weapon(std::string type) : type_1(type) {
}

void Weapon::setType(std::string type)
{
    type_1 = type;
}