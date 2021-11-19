/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:45:46 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/19 22:40:28 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private : 
            unsigned int _num;

    public :
            Span(void);
            Span(unsigned int n);
            Span(const Span &copy);
            Span &operator=(const Span &copy);
            ~Span(void);

            void addNumber(int n);
};

#endif