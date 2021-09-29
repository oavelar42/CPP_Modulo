/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:43:34 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/29 22:01:04 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected :

            std::string type_m;

    public :
    
            AMateria(void);
            AMateria(std::string const & type);
            AMateira(AMateria const& copy);
            AMateria& operator=(AMateria const& copy);
            virtual ~AMateria(void);

            std::string const& getType() const;

            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
            
};

#endif