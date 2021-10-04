/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/04 21:21:36 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << LET "Increment with BTC " OFF << std::endl;
    try {
            Bureaucrat btc(RED "Bitcoin" OFF, 2);
            std::cout << btc << std::endl;
            btc.increment();
            std::cout << btc << std::endl;
            btc.increment();
            std::cout << btc << std::endl;
            btc.increment();
            std::cout << btc << std::endl;
    }
    catch (const std::exception& error)
    {
            std::cout << error.what() << std::endl;
    }

    std::cout << "\n";

    std::cout << LET "Decrement with ETH " OFF << std::endl;
    try {
            Bureaucrat eth(GRE "Ethereum" OFF, 149);
            std::cout << eth << std::endl;
            eth.decrement();
            std::cout << eth << std::endl;
            eth.decrement();
            std::cout << eth << std::endl;
            eth.decrement();
            std::cout << eth << std::endl;         
    }
    catch (const std::exception& error)
    {
            std::cout << error.what() << std::endl;
    }

    std::cout << "\n";

    std::cout << std::endl << LET "Test high:" << std::endl;
    std::cout << "If the grade to HIGH does not decrement" OFF << std::endl;
                
    try {
            Bureaucrat high("HIGH", -1);
            std::cout << high << std::endl;	
			high.increment();
            std::cout << high << std::endl;
			high.increment();
            std::cout << high << std::endl;
    }

    catch (const std::exception& error){		
		    std::cout << error.what() << std::endl;
    }

    std::cout << std::endl << LET "Test low:" << std::endl;
    std::cout << "If the grade to LOW does not increment" OFF << std::endl;
                
    try {
            Bureaucrat low("LOW", 200);
            std::cout << low << std::endl;	
            low.decrement();
			std::cout << low << std::endl;
			low.decrement();
			std::cout << low << std::endl;
    }

    catch (const std::exception& error){
            std::cout << error.what() << std::endl;
    }

    return (0);
}