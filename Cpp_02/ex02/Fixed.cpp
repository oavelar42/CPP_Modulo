/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:33:40 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/17 17:45:02 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*            constructor , init constructors , copy , destructor             */
/* ************************************************************************** */

Fixed::Fixed(void)
{
    _value = 0;
}

Fixed::Fixed(const int val)
{
    _value = val << _bits;
}

Fixed::Fixed(const float val)
{
    _value = (int)roundf(val * (1 << _bits));
}

Fixed::Fixed(const Fixed& cpy)
{
    *this = cpy;
}

Fixed::~Fixed(void){
}

/* ************************************************************************** */
/*                  operações de aritmetico                                   */
/* ************************************************************************** */

     // assignment operator

Fixed&   Fixed::operator=(const Fixed& fixed)
{
    this->_value = fixed.getRawBits();
    return *this;
}

Fixed   Fixed::operator+(const Fixed &nb) const
{
    Fixed ret;

    ret.setRawBits(_value + nb._value);
    return ret;
}

Fixed Fixed::operator-(const Fixed &nb) const
{
    Fixed ret;

    ret.setRawBits(_value - nb._value);
    return ret;
}

Fixed Fixed::operator*(const Fixed &nb) const 
{
    Fixed ret;

    ret.setRawBits((_value * nb._value) / (1 << nb._bits));
    return ret;
}

Fixed Fixed::operator/(const Fixed &nb) const
{
    Fixed ret;

    ret.setRawBits((_value / nb._value) * (1 << nb._bits));
    return ret;
}

/* ************************************************************************** */
/*                  somar | subtrair   (pre | pos)                            */
/* ************************************************************************** */

Fixed Fixed::operator++(void)
{
    Fixed temp;
    
    temp.setRawBits(++_value);
    return temp;
}

Fixed Fixed::operator--(void)
{
    Fixed temp;

    temp.setRawBits(--_value);
    return temp;
}

Fixed Fixed::operator++(int)
{
    Fixed temp;

    temp.setRawBits(_value++);
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp;

    temp.setRawBits(_value--);
    return temp;
}

/* ************************************************************************** */
/*                  operador de comparação                                    */
/* ************************************************************************** */

bool Fixed::operator>(const Fixed &src) const
{
    return this->_value > src._value;
}

bool Fixed::operator<(const Fixed &src) const
{
    return this->_value < src._value;
}

bool Fixed::operator>=(const Fixed &src) const
{
    return this->_value >= src._value;
}

bool Fixed::operator<=(const Fixed &src) const
{
    return this->_value <= src._value;
}

bool Fixed::operator==(const Fixed &src) const
{
    return this->_value == src._value;
}

bool Fixed::operator!=(const Fixed &src) const
{
    return this->_value != src._value;
}

/* ************************************************************************** */
/*                  get and set ... convert                                   */
/* ************************************************************************** */

int Fixed::getRawBits(void) const
{
    return (_value);
}

void Fixed::setRawBits( int const raw )
{
    _value = raw;
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

// inserçao

std::ostream& operator << (std::ostream& out, const Fixed& n)
{
    out << n.toFloat();
    return out;
}

/* ************************************************************************** */
/*                  min / max                                                 */
/* ************************************************************************** */

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return (a);
    else
        return (b);
}