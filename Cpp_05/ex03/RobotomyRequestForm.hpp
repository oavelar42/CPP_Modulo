/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/11 20:44:56 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <string>
# include <iostream>

class RobotomyRequestForm : public Form {

	public:

			RobotomyRequestForm(void);
			RobotomyRequestForm(std::string const& target);
			RobotomyRequestForm(RobotomyRequestForm const& copy);
			RobotomyRequestForm& operator=(RobotomyRequestForm const& copy);
			~RobotomyRequestForm(void);

			virtual void execute(Bureaucrat const& executor) const;

	private:
			
			std::string _target;

};

#endif