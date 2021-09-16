/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:33:34 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/16 17:35:39 by oavelar          ###   ########.fr       */
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

        
        
        Fixed& operator=(const Fixed& n); //cpy assigment operator 

        /*
               operador aritmético
        */

        Fixed				operator+(const Fixed &src) const;
	    Fixed				operator-(const Fixed &src) const;
	    Fixed				operator*(const Fixed &src) const;
	    Fixed				operator/(const Fixed &src) const;

        /*
            Prefixo operador
        */

        Fixed&				operator++(void);
	    Fixed&				operator--(void);

         /*
            '**' Prefixo operador
        */

	    Fixed				operator++(int tmp);
	    Fixed				operator--(int tmp);

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

        ~Fixed(void);
    
};

std::ostream& operator << (std::ostream& out, const Fixed& n); // overload to << operator

#endif