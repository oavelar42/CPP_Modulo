/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:33:40 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/08 22:29:53 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "chic" << std::endl;
    _value = 0;
}

Fixed::Fixed(Fixed& n)
{
    std::cout << "aleeeeeu" << std::endl;
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

Fixed::~Fixed(void)
{
    std::cout << "aaaaaaaaoooooo" << std::endl;
}