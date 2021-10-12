/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:24:04 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/12 21:27:46 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Char.hpp"

Char::Char(std::string const& str_to_convert) {
	_str_to_convert = str_to_convert;
	_converted_value = _str_to_convert[0];
}

Char::Char(Char const& other) {
	*this = other;
}

Char& Char::operator=(Char const& other) {
	_str_to_convert = other._str_to_convert;
	_converted_value = other._converted_value;

	return *this;
}

std::string Char::toChar(void) const {
	return "'" + std::string(1, _converted_value) + "'";
}

int Char::toInt(void) const {
	return static_cast<int>(_converted_value);
}

float Char::toFloat(void) const {
	return static_cast<float>(_converted_value);
}

double Char::toDouble(void) const {
	return static_cast<double>(_converted_value);
}
