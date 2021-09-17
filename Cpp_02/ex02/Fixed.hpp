/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:33:34 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/17 17:24:59 by oavelar          ###   ########.fr       */
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

        /*
               operador aritmético
        */

        Fixed&				operator=(const Fixed &copy); // assignment operator

        Fixed				operator+(const Fixed &nb) const;
	    Fixed				operator-(const Fixed &nb) const;
	    Fixed				operator*(const Fixed &nb) const;
	    Fixed				operator/(const Fixed &nb) const;

        /*
            Pre incremento
        */

        Fixed				operator++(void);
	    Fixed				operator--(void);

        /*
            pos incremento
        */

	    Fixed				operator++(int);
	    Fixed				operator--(int);

         /*
            operador de comparação
        */

        bool				operator>(const Fixed &src) const;
	    bool				operator<(const Fixed &src) const;
	    bool				operator>=(const Fixed &src) const;
	    bool				operator<=(const Fixed &src) const;
	    bool				operator==(const Fixed &src) const;
	    bool				operator!=(const Fixed &src) const;

        int getRawBits( void ) const;        //Retorna um valor de ponto fixo
        void setRawBits( int const raw );    //Configurações de ponto fixo    

        float toFloat(void) const;           //converte fixo para float
        int toInt(void) const;               //convert fixo para inteiro   

        static Fixed&		min(Fixed& a, Fixed& b);
	    static const Fixed&	min(const Fixed& a, const Fixed& b);
	    static Fixed&		max(Fixed& a, Fixed& b);
	    static const Fixed&	max(const Fixed& a, const Fixed& b);
    
};

std::ostream& operator << (std::ostream& out, const Fixed& n); // overload to << operator

#endif