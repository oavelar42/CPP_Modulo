/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:57:25 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/02 14:22:32 by oavelar          ###   ########.fr       */
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
    *this = copy;
}

Brain& Brain::operator=(Brain const& copy)
{
   (void)copy;
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}