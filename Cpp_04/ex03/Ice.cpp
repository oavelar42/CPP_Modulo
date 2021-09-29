/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:44:25 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/29 22:43:41 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
    std::cout << type_m << "Ice" << std::endl;
}

Ice::Ice(Ice const& copy)
{
    *this = copy;
}

Ice& Ice::operator=(Ice const& copy) : AMateria(copy)
{
    AMateria::operator=(copy);
    return (*this);
}

Ice::~Ice(void) {  }

AMateria* Ice::clone(void) const
{
    return new Ice();
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName()
                << " *" << std::endl;
}