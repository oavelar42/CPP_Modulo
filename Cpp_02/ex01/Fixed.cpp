/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:33:40 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/10 21:36:23 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << LET "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(const Fixed& n)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = n;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    _value = val << _bits;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(val * (1 << _bits));
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

Fixed& Fixed::operator = (const Fixed& n)
{
    if (this == &n)
        return *this;
    std::cout << "Assignation operator called" << std::endl;
   _value = n.getRawBits();
    return *this;
}

std::ostream& operator << (std::ostream& out, const Fixed& n)
{
    out << n.toFloat();
    return out;
}

Fixed::~Fixed(void)
{
    std::cout << LET "Destructor called" OFF << std::endl;
}

// converter 

int Fixed::toInt(void) const
{
    return _value >> _bits;
}

float Fixed::toFloat(void) const
{
    return (float)_value / (float)(1 << _bits);
}