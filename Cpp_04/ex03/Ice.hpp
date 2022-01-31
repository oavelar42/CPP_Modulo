/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:44:28 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/28 15:26:33 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice: public AMateria
{
    public:

        Ice(void);
        Ice(const Ice& copy);
        Ice& operator=(const Ice& copy);
        virtual ~Ice(void);

        virtual AMateria* clone() const;
        virtual void	use(ICharacter& target);

};

#endif