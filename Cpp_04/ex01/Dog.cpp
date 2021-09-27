/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:22:24 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 22:15:05 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor created" << std::endl;
    type = "Dog";
}

Dog::Dog(Dog const& copy) : Animal(copy)
{
    std::cout << "Copy Dog constructor created" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(Dog const& copy)
{
    Animal::operator=(copy);
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Cachorro latindo" << std::endl;
}