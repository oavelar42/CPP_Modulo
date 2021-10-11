/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:29 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/11 19:26:01 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {  }

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& copy)
{
    _grade = copy._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void) {  }


/* ************************************************************************** */


void Bureaucrat::increment(void)
{
    if (_grade < 2)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrement(void)
{
    if (_grade > 149)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}


/* ************************************************************************** */


std::string const& Bureaucrat::getName(void) const
{
    return _name;
}

int Bureaucrat::getGrade(void) const
{
    return _grade;
}


/* ************************************************************************** */


const char* Bureaucrat::GradeTooHighException::what(void) const throw ()
{
    return OTA "Grade too high!" OFF;
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw ()
{
    return OTA "Grade too low!" OFF;
}


/* ************************************************************************** */


std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureau)
{
    output << bureau.getName() << LET ", bureaucrat grade " OFF << bureau.getGrade() << "!";
    return (output);
}

void Bureaucrat::signForm(Form* form) 
{
	try 
    {
		form->beSigned(this);
		std::cout << _name << " signed " << form->getName() << std::endl;
	} 
    catch (std::exception& e) 
    {
		std::cout << _name << ", can't signed " << form->getName()
		<< " because at least grade " << form->getGradeSign() << " needed." << std::endl;
	}
}