/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:24:02 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/20 17:04:03 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include <iostream>

class ClapTrap
{
    private :
        std::string name;
        unsigned int hit_point;
        unsigned int energ_point;
        unsigned int att_dmg;

    public :
        ClapTrap(void);                                     // constructor
        ClapTrap(std::string name_1);                         // specific type
        ClapTrap(const ClapTrap& copy);                     // copy
        ~ClapTrap(void);                                    // destructor

        void	attack(std::string const& target);
	    void	takeDamage(unsigned int amount);
	    void	beRepaired(unsigned int amount);
    
};

#endif