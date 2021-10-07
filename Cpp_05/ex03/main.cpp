/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/07 22:25:30 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat bart("Hommer simpson", 10);
	std::cout << bart;
	std::cout << "\n";
	
	try
	{
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
		PresidentialPardonForm PPF("Barney");
		std::cout << PPF;
		bart.signForm(&PPF);
		PPF.execute(bart);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		bart.increment();
		std::cout << bart;
		std::cout << "\n";
		RobotomyRequestForm RRF("Barney");
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
		PresidentialPardonForm PPF("Barney");
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