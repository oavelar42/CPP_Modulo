/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:48:58 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/26 21:31:01 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{

	MutantStack<int> stack;
	stack.push(5);
	stack.push(17);

	std::cout << stack.top() << std::endl;

	stack.pop();

	std::cout << stack.size() << std::endl;

	stack.push(3);
	stack.push(5);
	stack.push(737);

	stack.push(0);

	MutantStack<int>::iterator it = stack.begin();
	MutantStack<int>::iterator ite = stack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;++it;
	}

	std::stack<int> s(stack);
	return 0;
}