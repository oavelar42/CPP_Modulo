/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:46:08 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/23 16:16:40 by oavelar          ###   ########.fr       */
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
    if (this->vetor.size() == this->_num)
        throw limiterror();
    vetor.push_back(n);
}

unsigned int Span::longestSpan(void)
{
    if (vetor.size() < 2)
        throw notnumber();
    
    std::vector<int> temp(this->vetor);
    std::sort(temp.begin(), temp.end());

    return (temp.back() - temp.front());
}

unsigned int		Span::shortestSpan() 
{
	if (vetor.size() < 2)
		throw limiterror();
    else
    {
        std::vector<int> vec;
        std::copy(this->vetor.begin(), this->vetor.end(), std::back_inserter(vec));
        std::sort(vec.begin(), vec.end());
        return (vec.at(1) - vec.at(0));
    }
}

void	Span::addVal(std::vector<int>::iterator const &begin,
		std::vector<int>::iterator const &end)
{
	for (std::vector<int>::iterator iter = begin; iter < end; iter++)
		this->addNumber(*iter);
}

const char* Span::limiterror::what(void) const throw ()
{
    return "Limit of Numbers";
}

const char* Span::notnumber::what(void) const throw ()
{
    return "Not enough numbers";
}