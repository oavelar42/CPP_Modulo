/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:57 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/27 21:49:22 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#define MAX_VAL 50

#include <iostream>
#include <string>
#include <stdlib.h>
#include <exception>
#include <time.h>

template<class T>

class Array 
{
    private :

        T *_array;
        unsigned int _len;


    public :

        Array(void) { };
        Array(const Array& copy);
        Array(unsigned int val);
        ~Array(void) { };
        Array<T>& operator=(const Array<T> &copy);
        T& operator [] (unsigned int count);
        unsigned int size(void) const;      
};

template<class T>
Array<T>::Array(unsigned int val) : _len(val)
{
    _array = new T[val];
}

template<class T>
Array<T>::Array(const Array &copy) : _len(copy.size())
{
    _array = new T[_len];
    for(unsigned int i = 0; i < _len; i++)
        _array[i] = copy._array[i];
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T> &copy)
{
    _len = copy.size();
    delete[] _array;
    _array = new T[_len];
    for(unsigned int i = 0; i < _len; i++)
        _array[i] = copy._array[i];
    return (*this);
}

template<class T>
T& Array<T>::operator [] (unsigned int count)
{
    if (count >= _len)
        throw std::exception();
        //throw std::out_of_range("NOTHING");
    return (_array[count]);    
}

template<class T>
unsigned int Array<T>::size(void) const
{
    return (_len);
}


#endif