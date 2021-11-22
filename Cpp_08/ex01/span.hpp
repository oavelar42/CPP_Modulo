/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:45:46 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/22 17:32:01 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define OFF "\033[0m"
# define LET "\033[1m"

#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private : 
            unsigned int _num;
            std::vector<int> vetor;

    public :
            Span(void);
            Span(unsigned int n);
            Span(const Span &copy);
            Span &operator=(const Span &copy);
            ~Span(void);

            void addNumber(int n);
            int	longestSpan(void);

    class limiterror : public std::exception
    {
        public :
            const char* what(void) const throw ();
    };

    class notnumber : public std::exception
    {
        public :
            const char* what(void) const throw ();
    };


};

#endif