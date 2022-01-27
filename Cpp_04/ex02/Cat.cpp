/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:22:35 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/27 21:48:09 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor created" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
    std::cout << "Copy Cat constructor created" << std::endl;
    *this = copy;
    brain = new Brain(*copy.brain);
}

Cat& Cat::operator=(Cat const& copy)
{
    Animal::operator=(copy);
    type = copy.type;
    *brain = *copy.brain;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Gato miando" << std::endl;
}