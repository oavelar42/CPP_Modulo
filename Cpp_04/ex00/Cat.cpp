/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:22:35 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/02 14:12:03 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor created" << std::endl;
    type = "Cat";
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
    std::cout << "Copy Cat constructor created" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(Cat const& copy)
{
    Animal::operator=(copy);
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Gato miando" << std::endl;
}
