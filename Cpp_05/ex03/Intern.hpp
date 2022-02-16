/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:01:01 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/16 15:25:13 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private :
    
		typedef Form* (Intern::*action)(const std::string &target);

    public :
    
        Intern(void);
        Intern(Intern const& copy);
        Intern& operator=(Intern const& copy);
        ~Intern(void);

        Form* createShrubberyCreationForm(const std::string &target);
	    Form* createRobotomyRequestForm(const std::string &target);
	    Form* createPresidentialPardonForm(const std::string &target);

        Form *makeForm(std::string name, std::string target); 
};

#endif