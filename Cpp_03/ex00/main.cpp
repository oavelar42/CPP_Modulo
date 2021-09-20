/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:24:00 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/20 17:08:31 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ota("Messi ");
	ClapTrap ota1("Neymar ");
	ClapTrap ota2("Mbappé ");

	ota.attack("Mbappé ");
	ota1.takeDamage(2);

	ota2.attack("Neymar ");
	ota.takeDamage(11);

	ota2.attack("Messi ");
	ota1.takeDamage(5);
	ota.beRepaired(4);

	return 0;
}
