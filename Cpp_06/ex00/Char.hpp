/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:24:12 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/12 21:35:50 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_HPP
# define CHAR_HPP

# include "Conversion.hpp"
# include <iostream>
# include <string>

class Char : public Conversion {

	public:
	        Char(void) { }
		    Char(std::string const& str_to_convert);
		    Char(Char const& other);
            virtual ~Char(void) { }
        	Char& operator=(Char const& other);

            std::string toChar(void) const;
            int toInt(void) const;
            float toFloat(void) const;
            double toDouble(void) const;

	protected:

		char _converted_value;
        std::string	_str_to_convert;
};

#endif