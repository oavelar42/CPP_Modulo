/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/10 22:14:02 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void) {

	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("Presidential pardon form", "Bender");
	delete rrf;

	rrf = someRandomIntern.makeForm("Robotomy request form", "Bender");
	delete rrf;

	rrf = someRandomIntern.makeForm("Shrubbery creation form", "Bender");
	delete rrf;

	rrf = someRandomIntern.makeForm("Earth destruction request form", "Bender");

	return (0);
}
