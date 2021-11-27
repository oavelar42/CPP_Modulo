/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:49:16 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/27 18:40:16 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<class T>
MutantStack<T>::MutantStack(void) { }

template<class T>
MutantStack<T>::MutantStack(const MutantStack & copy) : std::stack<T>(copy) {  }

template<class T>
MutantStack<T>::~MutantStack(void) {}

template<class T>
MutantStack<T>& MutantStack<T>::operator = (const MutantStack<T> &copy)
{
    this->c = copy.c;
    return (*this);
}

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

template class MutantStack<int>;
template class MutantStack<std::string>;

/*   
    template class MutantStack<int>;
    template class MutantStack<std::string>;

    uso isso no .cpp para indicar para o compilador a que classe ele vai precisar
    se não indicar nada busca referencia de outra coisa e nao compila

*/