/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:58:52 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/27 21:44:56 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor created" << std::endl;
    return ;
}

Animal::Animal(Animal const& copy)
{
    std::cout << "Animal copy created" << std::endl;
    *this = copy;
    return ;
}

Animal& Animal::operator=(Animal const& copy) 
{
    //this->type = copy.type; 
    (void)copy;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}