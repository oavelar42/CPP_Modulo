/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/04 22:33:41 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat bart("Bart Simpson", 5);
		std::cout << bart;
		Form		form1("Form one", 50, 2);
		std::cout << form1;
		bart.signForm(&form1);
		std::cout << form1;
		Form		form2("Form two", 3, 2);
		std::cout << form2;
		bart.signForm(&form2);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    
    return (0);
}