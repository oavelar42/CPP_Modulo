/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:37 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/31 15:25:53 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
		Bureaucrat bart(LET "Hommer simpson" OFF, 13);
		Bureaucrat lisa(LET "Marge simpson" OFF, 6);
		std::cout << bart;
		std::cout << "\n";

		Form* one = new ShrubberyCreationForm("Barney");
		Form* two = new RobotomyRequestForm("Krusty");
		Form* three = new PresidentialPardonForm("Moe");
	
	try
	{
		std::cout << *one << std::endl;
		bart.signForm(*one);
		bart.executeForm(*one);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << *two << std::endl;
		bart.signForm(*two);
		bart.executeForm(*two);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


		try
	{
		std::cout << *three << std::endl;
		bart.signForm(*three);
		bart.executeForm(*three);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << LET "\n TESTE INCREMENT \n" OFF << std::endl;

	try
	{
		lisa.increment();
		
		std::cout << *one << std::endl;
		lisa.signForm(*one);
		lisa.executeForm(*one);
		std::cout << "\n";
		std::cout << "\n";
		
		std::cout << *two << std::endl;
		lisa.signForm(*two);
		lisa.executeForm(*two);
		std::cout << "\n";
		std::cout << "\n";

		std::cout << *three << std::endl;
		lisa.signForm(*three);
		lisa.executeForm(*three);
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

    return (0);
}