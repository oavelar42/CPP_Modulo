/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:57:25 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/28 22:08:30 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor created" << std::endl;
}

Brain::Brain(Brain const& copy)
{
    std::cout << "Brain copy constructor created" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideias[i] = copy.ideias[i];
}

Brain& Brain::operator=(Brain const& copy)
{
    if (this != &copy)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideias[i] = copy.ideias[i];
        }
    }
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}