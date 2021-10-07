/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:01:01 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/07 22:23:11 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public :
    
        Intern(void);
        Intern(Intern const& copy);
        Intern& operator=(Intern const& copy);
        ~Intern(void);

        Form*    makeForm(std::string const & name, std::string const & target);

    private :

};

#endif