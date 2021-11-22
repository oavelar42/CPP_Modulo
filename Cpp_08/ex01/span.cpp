/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:46:08 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/22 17:39:44 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
    _num = 0;
}

Span::Span(unsigned int n)
{
    _num = n;
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(const Span &copy)
{
    if (this == &copy)
        return (*this);
    _num = copy._num;
    return (*this);
}

Span::~Span(void) {  }

void Span::addNumber(int n)
{
    if (vetor.size() == _num)
        throw limiterror();
    vetor.push_back(n);
}

int Span::longestSpan(void)
{
    if (this->vetor.size() < 2)
        throw notnumber();
    
    std::vector<int> temp(this->vetor);
    std::sort(temp.begin(), temp.end());

    return (temp.back() - temp.front());
}

const char* Span::limiterror::what(void) const throw ()
{
    return "Limit of Numbers";
}

const char* Span::notnumber::what(void) const throw ()
{
    return "Not enough numbers";
}