/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:55:36 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/24 18:49:52 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;
        
    ::swap( a, b );
        std::cout << MAG "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << " . " OFF << std::endl;
        std::cout << "\n";  

    std::string c = " string1";
    std::string d = "string2";
       
    ::swap(c, d);
        std::cout << RED "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << " . " OFF << std::endl;
        std::cout << "\n";

    int i = 0.5;
	int j = 0;
    
	::swap( i, j );
        std::cout << GRE "i = " << i << ", j = " << j << std::endl;
        std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
        std::cout << "max( i, j ) = " << ::max( i, j ) << " . " OFF << std::endl;
        std::cout << "\n";
        
    i = j;
    
        std::cout << YEL "&i: " << &i << std::endl;
	    std::cout << "&j: " << &j << " . " OFF << std::endl;
        std::cout << "\n";

    Awesome ab(2), bc(4);
    swap(ab, bc);
    std::cout << "ab = " << ab << " " << bc << std::endl;
    std::cout << "max value = " << max(ab, bc) << std::endl;
    std::cout << "min value = " << min(ab, bc) << std::endl;

    return (0);
}