/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:58:52 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 21:41:06 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor created" << std::endl;
    type = "Empty";
}

Animal::Animal(Animal const& copy)
{
    std::cout << "Animal copy created" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(Animal const& copy) 
{
    type = copy.getType();   //maybe copy.type 
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}

void Animal::makeSound(void) const
{
    std::cout << "Quiet now" << std::endl;
}