/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:43:30 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/29 22:07:49 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {   }

AMateria::AMateria(std::string const & type)
{
    type_m = type;
}

AMateria::AMateria(AMateria const& copy)
{
    *this = copy;
}

AMateria& AMateria::operator=(AMateria const& copy)
{
    type_m = copy.type_m;
    return (*this);
}

AMateria::~AMateria(void)  {   }

std::string const& AMateria::getType() const
{
    return (type_m);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}