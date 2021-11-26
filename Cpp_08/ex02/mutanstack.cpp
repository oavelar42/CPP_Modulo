/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutanstack.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:49:16 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/26 22:03:56 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<class T>
MutantStack<T>::MutantStack(void)  {   }

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) 
{
    *this = copy;
}

template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &copy)
{
    this->c = copy.c;
    return (*this);
}

template<class T>
MutantStack<T>::~MutantStack(void) {   }

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return(this->c.begin());
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return(this->c.end());
}