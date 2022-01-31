/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:10:05 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/31 14:58:33 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential pardon", 25, 5)
{
    _target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) :
    Form("Presidential pardon", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy)
    : Form(copy), _target(copy._target)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& copy)
{
    Form::operator=(copy);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {  }

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (getGradeExec() < executor.getGrade())
        throw GradeTooLowException();
    else 
        std::cout << "" OTA << _target << OFF " has been pardoned by Zafod Beeblebrox." <<std::endl;
}