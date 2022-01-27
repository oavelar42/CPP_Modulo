/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:13:05 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/27 13:58:47 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Character : public ICharacter
{
        private:
        
                std::string name_c;
                AMateria* _materia[num];
                
        public:

                Character(void);
                Character(std::string const & name);
                Character(const Character& copy);
                Character& operator=(const Character& copy);
                virtual ~Character(void);
                
                std::string const & getName() const;
                
                void equip(AMateria* m);
                void unequip(int idx);
                void use(int idx, ICharacter& target);

};

#endif