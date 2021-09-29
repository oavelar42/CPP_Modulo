/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:44:22 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/29 22:52:36 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public : 

            Cure(void);
            Cure(Cure const& copy);
            Cure& operator=(Cure const& copy);
            ~Cure(void);

            AMateria* clone(void) const;
            void use(ICharacter& target);
            
};

#endif