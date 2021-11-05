/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:01:28 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/05 20:21:54 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define GRE "\x1B[32m"
# define OFF "\033[0m"

#include <iostream>
#include <string>

template<class T>

void print(T& str)
{
    std::cout << str << std::endl;
}

template<class T>

void iter(T *array, int len, void func(T const &))
{
    for(int i = 0; i < len; i++)
        func(array[i]);
}

class Awesome
{
        public:

            Awesome( void ) : _n( 42 ) { return; }
            int get( void ) const { return this->_n; }

        private:

            int _n;

};
        
        std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
        template< typename T >
        void print( T const & x ) { std::cout << x << std::endl; return; }

#endif