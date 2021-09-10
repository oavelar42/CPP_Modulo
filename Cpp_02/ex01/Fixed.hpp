/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:33:34 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/10 17:00:06 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define OFF "\033[0m"
# define LET "\033[1m"

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _value;
        const static int _bits = 8;

    public:
        Fixed(void);
        Fixed(Fixed& n);
        ~Fixed(void);
        Fixed& operator=(Fixed& n);
        int getRawBits( void ) const;
        void setRawBits( int const raw ); 
    
};


#endif