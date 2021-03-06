/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:15:08 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/19 01:55:59 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cstring>
#include <cstdio>

class Conversion
{
    private:

            std::string _input;
            double _value;

    public:
    
            Conversion() {  };
            Conversion(const std::string input);
            Conversion(const Conversion &copy);
            Conversion &operator=(const Conversion &copy);
            ~Conversion() {  };

            void toChar();
            void toInt();
            void toFloat();
            void toDouble();
    };

#endif