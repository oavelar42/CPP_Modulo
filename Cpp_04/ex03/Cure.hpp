/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:44:22 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/03 16:51:57 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure: public AMateria
{
    public:

        Cure(void);
        Cure(Cure const& copy);
        Cure& operator=(const Cure& copy);
        virtual ~Cure(void);
        
        virtual AMateria* clone() const;
        virtual void	use(ICharacter& target);

};

#endif