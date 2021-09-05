/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:59:43 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/05 21:35:29 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    private:
        std::string name_1;
        Weapon *weapon_1;

    public:
        HumanB(std::string name);
        //~HumanB(void);
        
        void attack(void);
        void setWeapon(Weapon &weapon);
        void getWeapon(void);

};


#endif