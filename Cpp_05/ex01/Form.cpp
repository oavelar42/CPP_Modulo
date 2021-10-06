/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:47:10 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/05 20:19:37 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


/* ************************************************************************** */


Form::Form(void) : _name(" "), _sign(50), _execute(10)
{ 
    _isSigned = false ;
}

Form::Form(std::string const& name, int sign, int execute) : _name(name),
    _sign(sign), _execute(execute), _isSigned(0)
{
    if (_sign < 1 || _execute < 1)
        throw GradeTooHighException();
    else if (_sign > 150 || _execute > 150)
        throw GradeTooLowException();
}

Form::Form(Form const& copy) : _name(copy._name), _sign(copy._sign),
		_execute(copy._execute), _isSigned(copy._isSigned) 
{
    *this = copy;
}

Form& Form::operator=(Form const& copy)
{
    _isSigned = copy._isSigned;
    return (*this);
}

Form::~Form(void) {  }


/* ************************************************************************** */


std::string Form::getName(void) const
{
    return (_name);
}

int Form::getGradeSign(void) const
{
    return (_sign);
}

int Form::getGradeExec(void) const
{
    return (_execute);
}

int	        Form::getState(void) const
{
	return (_isSigned);
}

/* ************************************************************************** */


void Form::beSigned(Bureaucrat* f)
{
    if (_sign < f->getGrade())
        throw GradeTooLowException();
	else
		_isSigned = true;
}

std::ostream& operator<<(std::ostream& output, const Form& ob)
{
	if (ob.getState() == 0)
		std::cout	<< ob.getName() << " (unsigned) :" << std::endl;
	else
		std::cout << ob.getName() << " (signed) :" << std::endl;
	    std::cout	<< "\tGrade requiered to sign : " << ob.getGradeSign() << std::endl
				<< "\tGrade requiered to execute : " << ob.getGradeExec() << std::endl;

        return output;
}


/* ************************************************************************** */


const char* Form::GradeTooHighException::what(void) const throw ()
{
    return OTA "Grade too high." OFF;
}

const char* Form::GradeTooLowException::what(void) const throw ()
{
    return OTA "Grade too low." OFF;
}


/* ************************************************************************** */