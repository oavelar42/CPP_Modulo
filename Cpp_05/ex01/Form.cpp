/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:47:10 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/04 22:57:01 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


/* ************************************************************************** */


Form::Form(void) : _name("_"), _sign(50), _execute(10) 
{
	_beSigned = false;
}

Form::Form(std::string const& name, int sign, int execute) : _name(name),
    _sign(sign), _execute(execute), _beSigned(0)
{
    if (_sign < 1 || _execute < 1)
        throw GradeTooHighException();
    else if (_sign > 150 || _execute > 150)
        throw GradeTooLowException();
}

Form::Form(Form const& copy) : _name(copy._name), _sign(copy._sign),
		_execute(copy._execute), _beSigned(copy._beSigned) 
{
    *this = copy;
}

Form& Form::operator=(Form const& copy)
{
    _beSigned = copy._beSigned;
    return (*this);
}

Form::~Form(void) {  }


/* ************************************************************************** */


std::string Form::getName(void) const
{
    return _name;
}

int Form::getGradeSign(void) const
{
    return _sign;
}

int Form::getGradeExec(void) const
{
    return _execute;
}

bool Form::isSigned(void) const 
{
	return _beSigned;
}

/* ************************************************************************** */


void Form::Signed(Bureaucrat* f) const
{
    if (_sign < f->getGrade())
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& output, const Form& ob)
{
	output << "The form " << ob.getName()
		<< (ob.isSigned() ? " is" : " isn't")
		<< " signed. It requires a "
		<< ob.getGradeSign() << " grade to be signed and a "
		<< ob.getGradeExec() << " grade to be executed.";

        return output;
}


/* ************************************************************************** */


const char* Bureaucrat::GradeTooHighException::what(void) const throw ()
{
    return OTA "Grade is too high!" OFF;
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw ()
{
    return OTA "Grade is too low!" OFF;
}


/* ************************************************************************** */