/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:49:23 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/27 18:36:17 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define OFF "\033[0m"
# define LET "\033[1m"

#include <iostream>
#include <list>
#include <stack>
#include <iterator>
#include <vector>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &copy);
		~MutantStack(void);
		MutantStack& operator = (const MutantStack &copy);
		
		typedef    typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void);
		iterator	end(void);
};

#endif