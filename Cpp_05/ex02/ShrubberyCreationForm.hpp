/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/31 21:05:31 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# define TREE "\x1b[33m"

# include "Form.hpp"
# include <iostream>
# include <fstream>
# include <string>

class ShrubberyCreationForm : public Form 
{

	public:

			ShrubberyCreationForm(void);
			ShrubberyCreationForm(std::string const& target);
			ShrubberyCreationForm(ShrubberyCreationForm const& copy);
			ShrubberyCreationForm& operator=(ShrubberyCreationForm const& copy);
			virtual ~ShrubberyCreationForm(void);

			virtual void execute(Bureaucrat const& executor) const;

	private:

			std::string _target;

};

#endif
