/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:46:26 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/04 22:56:38 by oavelar          ###   ########.fr       */
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
                ~Form(void);

                std::string getName(void) const;
                int getGradeSign(void) const;
                int getGradeExec(void) const;
                void Signed(Bureaucrat* f) const;
                bool isSigned(void) const;


                class GradeTooHighException : public std::exception {
                public:
                    const char* what(void) const throw ();
                };

                class GradeTooLowException : public std::exception {
                    public:
                        const char* what(void) const throw ();
                };


        private :

                std::string _name;
                int const _sign;
                int const _execute;
                bool _beSigned;

};

    std::ostream& operator<<(std::ostream& output, const Form& ob);

#endif