/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/06 22:24:15 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>
# include <string>

class ShrubberyCreationForm : public Form {

	public:

			ShrubberyCreationForm(void);
			ShrubberyCreationForm(std::string const& target);
			ShrubberyCreationForm(ShrubberyCreationForm const& copy);
			ShrubberyCreationForm& operator=(ShrubberyCreationForm const& copy);
			~ShrubberyCreationForm(void);

			void execute(Bureaucrat const& executor) const;

	private:

			std::string _target;

};

#endif
