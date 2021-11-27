/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:48:58 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/27 18:42:54 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void) 
{
	std::cout << LET "------Test subject------" OFF << std::endl;
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
	
	try
	{
		std::cout << "\n";
		std::cout << LET "------Test List------" OFF << std::endl;
		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << "Back : " << list.back() << std::endl;

		list.pop_back();

		std::cout << "Size : " << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(stack);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    try
    {
		std::cout << "\n";
		std::cout << LET "------Test Number------" OFF << std::endl; 
    	
		MutantStack<int> num;
		for (int i = 0; i <= 10; i++) {
        	num.push(i);
		}

		std::cout << "Top : " << num.top() << std::endl;

		num.pop();

		std::cout << "Size : " << num.size() << std::endl;
     	
		MutantStack<int>::iterator it = num.begin();
		MutantStack<int>::iterator ite = num.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(stack);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}