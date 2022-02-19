/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:57 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/19 22:56:38 by oavelar          ###   ########.fr       */
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

        Array(void);
        Array(const Array& copy);
        Array(unsigned int val);
        ~Array(void);
        Array<T>& operator=(const Array<T> &copy);
        T& operator [] (unsigned int count);
        unsigned int size(void) const;      
};

template<class T>
Array<T>::Array(void)
{
    _array = new T;
	_len = 0;
}

template<class T>
Array<T>::~Array() 
{
    delete[] _array;
}

template<class T>
Array<T>::Array(unsigned int val) : _len(val)
{
    _array = new T[val];
}

template<class T>
Array<T>::Array(const Array<T> &copy) : _array(0), _len(0)
{
    *this = copy;
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T> &copy)
{
    if (this == &copy)
    {
		return *this;
	}
	delete[] _array;
	_len = 0;
	_array = 0;
	if (copy._len)
    {
		_array = new T[copy._len];
	}
	for (unsigned int i = 0; i < copy._len; i++)
    {
		_array[i] = copy._array[i];
	}
	_len = copy._len;
	return *this;
}

template<class T>
T& Array<T>::operator[](unsigned int count)
{
    if (count >= _len)
        throw std::exception();
        //throw std::out_of_range("NOTHING");
    return (_array[count]);    
}

template<class T>
unsigned int Array<T>::size() const
{
    return (_len);
}

#endif