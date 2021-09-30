/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:13:05 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/30 16:24:53 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    public :
    
            Character(void);
            Character(std::string const & name);
            Character(Character const& copy);
            Character& operator=(Character const& copy);
            ~Character(void);

            std::string const& getName() const;

            void equip(AMateria* m);
            void unequip(int idx);
            void use(int idx, ICharacter& target);

    private :

            std::string name_c;
            AMateria* _materia[4];
            
};

#endif