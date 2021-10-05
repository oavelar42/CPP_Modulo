/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:14:33 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/05 18:51:33 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define LET "\033[1m"
# define GRE "\x1B[32m"

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
    
            Bureaucrat(void);
            Bureaucrat(std::string const& name, int grade);
            Bureaucrat(Bureaucrat const& copy);
            Bureaucrat& operator=(Bureaucrat const& copy);
            ~Bureaucrat(void);

            std::string const& getName(void) const;
            int getGrade(void) const;

            void increment(void);
            void decrement(void);
            void signForm(Form* form);

    class GradeTooHighException : virtual public std::exception
	{
		public:
			GradeTooHighException(void) {}

			virtual const char* what() const throw ();
			
	};
	
	class GradeTooLowException : virtual public std::exception
	{
		public:
			GradeTooLowException(void) {}

			virtual const char* what() const throw ();
	};

    private :

            std::string const _name;
            int    _grade;

};

std::ostream&   operator<<(std::ostream& output, const Bureaucrat& bureau);

#endif