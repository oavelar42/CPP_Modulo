/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/11 20:54:26 by oavelar          ###   ########.fr       */
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

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	delete rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	delete rrf;

	rrf = someRandomIntern.makeForm("Intern doenst create", "Bender");

	return (0);
}
