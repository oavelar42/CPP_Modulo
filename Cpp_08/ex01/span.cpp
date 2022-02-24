/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:46:08 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/24 17:09:49 by oavelar          ###   ########.fr       */
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
        std::sort(vetor.begin(), vetor.end());

        std::vector<int>::iterator it;
        it = vetor.begin();

        int i = 0;
        long shortest = (vetor[1] - vetor[0]);

        while(it != vetor.end() - 1) 
        {
            if ((vetor[i + 1] - vetor[i]) < shortest) {
                shortest = ( vetor[i + 1] - vetor[i]);
            }
            i++;
            it++;
        }
        return (shortest);
    }
}

void    Span::addVal(std::vector<int>::iterator const &begin,
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