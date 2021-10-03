/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:43:34 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/03 17:09:48 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
        protected:

                std::string type_m;

        public:

                AMateria(void);
                AMateria(std::string const & type);
                AMateria(const AMateria& copy);
                AMateria& operator=(const AMateria& copy);
                virtual ~AMateria(void);

                std::string	const & getType() const;
                virtual AMateria* clone() const = 0;
                virtual void use(ICharacter& target);

};

#endif