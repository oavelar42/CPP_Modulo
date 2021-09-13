/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:33:34 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/13 16:47:36 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define OFF "\033[0m"
# define LET "\033[1m"

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _bits = 8;

    public:
        Fixed(void);

        Fixed(const Fixed& cpy);  //copy
        
        Fixed(const int val);     // as duas para especificar os tipos
        Fixed(const float val);

        ~Fixed(void);
        
        Fixed& operator=(const Fixed& n); //cpy assigment operator 
        int getRawBits( void ) const;
        void setRawBits( int const raw ); 

        float toFloat(void) const;
        int toInt(void) const;
    
};

std::ostream& operator << (std::ostream& out, const Fixed& n); // overload to << operator

#endif