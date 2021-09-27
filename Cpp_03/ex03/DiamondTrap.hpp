/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:36:23 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 16:14:18 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
        private :
                std::string     name;
        
        public :
                DiamondTrap(void);
                DiamondTrap(std::string name_1);
                DiamondTrap(const DiamondTrap& copy);
                DiamondTrap& operator=(const DiamondTrap& copy);
                ~DiamondTrap(void);
                void whoAmI();
};

#endif