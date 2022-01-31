/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:44:25 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/28 15:25:55 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") { }

Ice::Ice(Ice const& copy) : AMateria(copy)
{
    *this = copy;
}

Ice& Ice::operator=(const Ice& copy)
{
	if (this != &copy)
		AMateria::operator=(copy);
	return *this;
}

Ice::~Ice(void) {  }

AMateria* Ice::clone() const 
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
		        << " *" << std::endl;
}