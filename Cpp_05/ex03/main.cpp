/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/09 21:37:46 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	Bureaucrat                    b1("B1", 137);
    Bureaucrat                    b2("B2", 45);
    Bureaucrat                    b3("B3", 5);
    ShrubberyCreationForm         f1("SCF");
    RobotomyRequestForm           f2("RRF");
    PresidentialPardonForm        f3("PPF");

std::cout << "Only Shrubbery Form\n";
  try
    {
        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);

        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);
    }
    catch (std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
	std::cout<<"\n\n";
    std::cout << "Robotomy + Shrubbery\n";
    try
    {
        b2.signForm(f1);
        b2.signForm(f2);
        b2.signForm(f3);

        b2.executeForm(f1);
        b2.executeForm(f2);
        b2.executeForm(f3);
    }
    catch (std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }
    std::cout<<"\n\n";
    std::cout << "ALL\n";

    try
    {
        b3.signForm(f1);
        b3.signForm(f2);
        b3.signForm(f3);

        b3.executeForm(f1);
        b3.executeForm(f2);
        b3.executeForm(f3);
    }
    catch (std::exception &err)
    {
        std::cout << err.what() << std::endl;
    }



	}

/*int main(void)
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
}*/