/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:43:30 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/03 16:42:18 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {   }

AMateria::AMateria(std::string const & type)
{
	type_m = type;
}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
	if (this != &copy)
		type_m = copy.getType();
	return *this;
}

AMateria::~AMateria(void)  {   }

std::string	const & AMateria::getType() const
{
	return type_m;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	//std::cout << "AMateria use\n";
}