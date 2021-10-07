/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:10:15 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/06 22:16:11 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy request", 72, 45)
{
    _target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) 
    : Form("Robotomy request", 72, 45)
{
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy) 
    : Form(copy), _target(copy._target)
{
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& copy)
{
    Form::operator=(copy);
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {  }

void    RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (getGradeExec() < executor.getGrade())
        throw GradeTooLowException();
    else
        std::cout << "XIIIIIIIII " << _target << " has been robotomized successfully 50\% of the time" 
                                    << std::endl;
}