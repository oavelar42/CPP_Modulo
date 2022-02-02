/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:59:00 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/02 13:44:59 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor created" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
    *this = copy;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& copy)
{
    type = copy.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "---SILENCED---" << std::endl;
}

/*-----------------------------------------------------------------------------*/


