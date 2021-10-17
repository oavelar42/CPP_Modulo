/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:15:08 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/17 19:52:47 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_HPP
# define CONVERSIONS_HPP

#include <iostream>
#include <math.h>
#include <climits>
#include <string>
#include <locale>
#include <iomanip>
#include <cstdlib>

class Conversion
{
    private :
            
            std::string getline;
           char _converted_value;
        std::string	_str_to_convert;

    public :

            Conversion(void) { };
            Conversion(char *av);
            ~Conversion(void) { };
            int toInt() const;
            char toChar() const;
            std::string getValue() const;
            std::string strChar() const;
            float toFloat() const;
            double toDouble() const;

            Char(void) { }
		    Char(std::string const& str_to_convert);
		    Char(Char const& other);
            virtual ~Char(void) { }
        	Char& operator=(Char const& other);

};

std::ostream& operator<<(std::ostream& out, const Conversion& src);

#endif