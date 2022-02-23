/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:46:22 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/23 16:51:04 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
    std::cout << LET "Main test :" OFF << std::endl;
    Span sp = Span(5);
    
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << sp.longestSpan() << std::endl;
    
    std::cout << "\n";

    try
	{
		std::cout << LET "Empty span :" OFF << std::endl;
		Span	sp = Span(0);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n";

	try
	{
		std::cout << LET "Size less test :" OFF << std::endl;
		Span sp = Span(2);
		
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(2);

		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n";

	try
	{
		std::cout << LET "Test 10000 :" OFF  << std::endl;
		Span	sp = Span(10000);
		std::vector<int>	v;
		
		sp.addNumber(10);
		for (int i = 1; i < 10000; i++)
			v.push_back(i);
		sp.addVal(v.begin(), v.end());
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
  	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}