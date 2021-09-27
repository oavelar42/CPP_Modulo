/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:59:00 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 22:49:04 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

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

WrongCat::WrongCat(void)
{
    std::cout <<"WrongCat constructed created" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat& WrongCat::operator=(WrongCat const& copy)
{
    WrongAnimal::operator=(copy);
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Bem ti vi" << std::endl;
}

