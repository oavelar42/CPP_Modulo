/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:02:14 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/07 22:24:56 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {  }

Intern::Intern(Intern const& copy)
{
    *this = copy;
}

Intern& Intern::operator=(Intern const& copy)
{
    (void)copy;
    return (*this);
}

Intern::~Intern(void) {  }

Form*   Intern::makeForm(std::string const & name, std::string const & target)
{
    // INIT
}