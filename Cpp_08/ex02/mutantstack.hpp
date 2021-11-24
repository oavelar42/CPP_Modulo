/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:49:23 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/24 19:50:53 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <iterator>
#include <vector>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &copy);
        MutantStack& operator = (const MutantStack &copy);
		~MutantStack(void);
		
		typedef    typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void);
		iterator	end(void);
};


#endif