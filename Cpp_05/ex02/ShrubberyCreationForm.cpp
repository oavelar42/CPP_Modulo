/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:12:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/10 21:22:15 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery creation", 145, 137)
{
    _target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target)
    : Form("Shrubbery creation", 145, 137)
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
   	if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
    std::ofstream file;
    file.open((_target + "_shrubbery").c_str());
   std::cout << OTA "Barney" OFF << " the tree is ready." << std::endl;
   
 file <<"        _#_          " << std::endl
    <<"       // \\)         " << std::endl
    <<"      // @ \\)        " << std::endl
    <<"     //     \\)       " << std::endl
    <<"    //  / \\  \\)      " << std::endl
    <<"   // o     O \\)     " << std::endl
    <<"  //___________\\)    " << std::endl
    <<"        |=|          " << std::endl
    <<"        |=|          " << std::endl
    <<"        |=|          " << std::endl
    <<"   ¨¨¨¨¨¨¨¨¨¨¨¨¨     " << std::endl;

}