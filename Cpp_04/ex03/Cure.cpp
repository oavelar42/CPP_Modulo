/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:44:19 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/30 16:27:10 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
    std::cout << type_m << "Cure" << std::endl;
}

Cure::Cure(Cure const& copy)
{
    *this = copy;
}

Cure& Cure::operator=(Cure const& copy) //: AMateria(copy)
{
    AMateria::operator=(copy);
    return (*this);
}

Cure::~Cure(void) {  }

AMateria* Cure::clone(void) const
{
    return new Cure();
}

void Cure::use(ICharacter& target)
{
   std::cout << "* heals " << target.getName() 
                << "'s wounds *" << std::endl;
}