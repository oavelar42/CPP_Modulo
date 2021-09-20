/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:24:00 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/20 22:30:13 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ota(OTA "Messi " OFF);
	ClapTrap ota1(RED "Neymar " OFF);
	ClapTrap ota2(GRE "Mbappé " OFF);

	ota.attack("Mbappé ");
	ota.takeDamage(2);
    ota.beRepaired(1);

	ota2.attack("Neymar ");
	ota2.takeDamage(5);
    ota2.beRepaired(4);

	ota1.attack("Messi ");
	ota1.takeDamage(3);
	ota1.beRepaired(2);

	return 0;
}
