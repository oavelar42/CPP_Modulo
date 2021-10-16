/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:15:08 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/16 21:59:22 by oavelar          ###   ########.fr       */
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
            std::string type;

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

};

std::ostream& operator<<(std::ostream& out, const Conversion& src);

#endif