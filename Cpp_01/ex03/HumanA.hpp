/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:59:33 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/05 21:35:23 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAMA_HPP
# define HUMANA_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    private:
        std::string name_1;
        Weapon &weapon_1;

    public:
       HumanA(std::string name, Weapon &weapon);
        //~HumanA(void);
        void attack(void);
};

#endif