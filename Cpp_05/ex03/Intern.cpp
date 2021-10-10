/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:02:14 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/10 22:22:54 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {  }

Intern::Intern(Intern const& copy)
{
    *this = copy;
}

Intern& Intern::operator=(Intern const& copy)
{
    (void)copy;
    return (*this);
}

Intern::~Intern(void) {  }

Form*   Intern::makeForm(std::string const& name, std::string const& target)
{
    Form *form[3] = 
                {new PresidentialPardonForm(target), 
                 new RobotomyRequestForm(target), 
                 new ShrubberyCreationForm(target)};

    for (int i = 0; i < 3; i++)
    {
        if (name.compare(form[i]->getName()) == 0)
        {
            std::cout << "Intern create " << *form[i] << std::endl;
            return (form[i]);
        }
        delete form[i];
    }
    std::cout << name << "nao volta os nome das classes" << std::endl;
    return (0);
}