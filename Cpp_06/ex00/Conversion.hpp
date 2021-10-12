/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:15:08 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/12 17:21:50 by oavelar          ###   ########.fr       */
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

    public :

            Conversion(void) { };
            Conversion(char *av);
            ~Conversion(void) { };
            int toInt() const;
            std::string getValue() const;
            std::string strChar() const;
            float toFloat() const;
            double toDouble() const;

};

std::ostream& operator<<(std::ostream& out, const Conversion& src);

#endif