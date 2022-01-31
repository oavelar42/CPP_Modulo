/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/31 13:33:25 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form 
{
	public:

			PresidentialPardonForm(void);
			PresidentialPardonForm(std::string const& target);
			PresidentialPardonForm(PresidentialPardonForm const& copy);
			PresidentialPardonForm& operator=(PresidentialPardonForm const& copy);
			~PresidentialPardonForm(void);

			virtual void execute(Bureaucrat const & executor) const;

	private:

			std::string _target;
};

#endif
