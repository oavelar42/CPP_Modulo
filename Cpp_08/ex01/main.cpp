/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:46:22 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/22 17:41:18 by oavelar          ###   ########.fr       */
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

	std::cout << "Longest span : " << sp.longestSpan() << std::endl;
    
    std::cout << "\n";

    try
	{
		std::cout << LET "Empty span :" OFF << std::endl;
		Span	sp = Span(0);
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}