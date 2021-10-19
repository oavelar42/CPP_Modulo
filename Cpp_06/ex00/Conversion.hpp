/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:15:08 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/19 22:16:37 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <iomanip>
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
            ~Conversion() {  };

            Conversion &operator=(const Conversion &copy);

            void toChar();
            void toInt();
            void toFloat();
            void toDouble();
    };

#endif


/*#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <iomanip>

class Conversion {

private:
	
        const std::string	_value;
        double _av;
        int		toInt();
        char	toChar();
        float	toFloat();
        double	toDouble();

public:
        Conversion();
        ~Conversion();
        Conversion(const std::string& value);
        Conversion(const Conversion& Conversion);
        Conversion& operator=(const Conversion& other);

        void    is_char();
        void	convert();
};

#endif*/