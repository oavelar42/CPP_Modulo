/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:12:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/07 22:11:37 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery creation", 145, 135)
{
    _target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target)
    : Form("Shrubbery creation", 145, 135)
{
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy)
    : Form(copy), _target(copy._target)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& copy)
{
    Form::operator=(copy);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {  }

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (getGradeExec() < executor.getGrade())
        throw GradeTooLowException();
    else
        std::string _fileout = executor.getName() + "_shrubbery";

        // fazer uma arvore aqui kkkkkkkkkkkkkkkk 
}