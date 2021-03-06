/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:24:00 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 16:17:50 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap Cripto(GRE "Bitcoin" OFF);
	
	Cripto.attack(RED "government" OFF);
	Cripto.takeDamage(2);
	Cripto.beRepaired(19);
	Cripto.highFivesGuys();
	Cripto.guardGate();
	Cripto.whoAmI();

	return 0;
}
