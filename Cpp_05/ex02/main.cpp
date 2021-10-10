/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/10 17:44:05 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat bart(LET "Hommer simpson" OFF, 136);
	std::cout << bart;
	std::cout << "\n";
	
	try
	{
		std::cout << "\n";
		ShrubberyCreationForm SCF("Barney");
		std::cout << SCF;
		bart.signForm(&SCF);
		SCF.execute(bart);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "\n";
		RobotomyRequestForm RRF(RED "Krusty" OFF);
		std::cout << RRF;
		bart.signForm(&RRF);
		RRF.execute(bart);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

		try
	{
		std::cout << "\n";
		PresidentialPardonForm PPF(GRE "Moe" OFF);
		std::cout << PPF;
		bart.signForm(&PPF);
		PPF.execute(bart);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << LET "\n TESTE INCREMENT \n" OFF << std::endl;

	try
	{
		bart.increment();
		std::cout << bart;
		std::cout << "\n";
		ShrubberyCreationForm SCF("Barney");
		std::cout << "\n";
		std::cout << SCF;
		bart.signForm(&SCF);
		SCF.execute(bart);
		RobotomyRequestForm RRF(RED "Krusty" OFF);
		std::cout << "\n";
		std::cout << RRF;
		bart.signForm(&RRF);
		RRF.execute(bart);
		PresidentialPardonForm PPF(GRE "Moe" OFF);
		std::cout << "\n";
		std::cout << PPF;
		bart.signForm(&PPF);
		PPF.execute(bart);
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

    return (0);
}