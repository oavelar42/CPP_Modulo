/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:44:28 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/29 22:35:18 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public : 
            Ice(void);
            Ice(Ice const& copy);
            Ice& operator=(Ice const& copy);
            ~Ice(void);

            AMateria* clone(void) const;
            void use(ICharacter& target);
            
};

#endif