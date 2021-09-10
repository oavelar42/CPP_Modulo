/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:33:40 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/10 16:49:03 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << LET "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(Fixed& n)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = n;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

Fixed& Fixed::operator = (Fixed& n)
{
    if (this == &n)
        return *this;
    std::cout << "Assignation operator called" << std::endl;
   _value = n.getRawBits();
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << LET "Destructor called" OFF << std::endl;
}