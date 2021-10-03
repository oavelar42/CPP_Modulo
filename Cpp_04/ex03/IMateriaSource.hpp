/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:31:55 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/03 15:30:56 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class IMateriaSource 
{
    public :
    
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria* ) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
           
};

#endif