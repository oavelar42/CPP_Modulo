/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:46:26 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/10 22:19:15 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define LET "\033[1m"
# define GRE "\x1B[32m"

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
                Form(void);
                Form(std::string const& name, int sign, int execute);
                Form(Form const& copy);
                Form& operator=(Form const& copy);
                virtual ~Form(void);

                std::string getName(void) const;
                int getGradeSign(void) const;
                int getGradeExec(void) const;
                int	getState(void) const;
                void beSigned(Bureaucrat* f);

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

                std::string _name;
                int const _sign;
                int const _execute;
                bool _isSigned;

};

    std::ostream& operator<<(std::ostream& output, const Form& ob);

#endif