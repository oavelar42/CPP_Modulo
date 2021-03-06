/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:55:43 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/23 15:51:01 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# define RED "\x1B[31m"
# define GRE "\x1B[32m"
# define YEL "\x1B[33m"
# define MAG "\x1B[35m"
# define OFF "\033[0m"

# include <iostream>
# include <string>

template< class T >

void swap(T &i, T &j)
{
    T tmp;

    tmp = i;
    i = j;
    j = tmp; 
}

template< class T >

T min(T &i, T &j)
{
    if (i < j)
        return (i);
    return (j);
}

template< class T >

T max(T &i, T &j)
{
    if (i > j)
        return (i);
    return (j);
}

class Awesome
{
        public:

            Awesome(void) : _n(0) {}
            Awesome( int n ) : _n( n ) {}
            Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
            bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
            bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
            bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
            bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
            bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
            bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
            int get_n() const { return _n; }

        private:

            int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }


#endif


/*


Os Templates de fun????o s??o fun????es especiais que podem operar com tipos gen??ricos . 
Isso nos permite criar um Template de fun????o cuja funcionalidade pode ser adaptada 
a mais de um tipo ou classe sem repetir todo o c??digo para cada tipo.

class e typename s??o basicamente as mesmas coisas

*/ 