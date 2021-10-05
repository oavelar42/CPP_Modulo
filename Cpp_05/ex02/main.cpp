/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/05 20:05:23 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << LET "Test high:" << std::endl;
    std::cout << "The grade is lower than it needed!!!" OFF << std::endl;
                
    try 
	{
            Form high("HIGH", -1, 10);
            std::cout << high << std::endl;	   
    }

    catch (const std::exception& error)
	{		
		    std::cout << error.what() << std::endl;
    }

    std::cout << std::endl << LET "Test low:" << std::endl;
    std::cout << "The grade is higher than it needed!!!" OFF << std::endl;
                
    try 
	{
            Form low("LOW", 50, 200);
            std::cout << low << std::endl;	
	}

    catch (const std::exception& error){
            std::cout << error.what() << std::endl;
    }

	std::cout << "\n";

	try
	{
		Bureaucrat bart("Hommer Simpson", 19);
		std::cout << bart;
		std::cout << "\n";
		Form		form1("Form one", 50, 2);
		std::cout << form1;
		std::cout << "\n";
		bart.signForm(&form1);
		std::cout << "\n";
		std::cout << form1;
		std::cout << "\n";
		Form		form2("Form two", 3, 2);
		std::cout << form2;
		std::cout << "\n";
		bart.signForm(&form2);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    
    return (0);
}