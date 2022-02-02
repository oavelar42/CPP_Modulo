/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:39:44 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/02 14:11:37 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

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