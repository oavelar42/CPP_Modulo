/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:24:00 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/26 22:25:08 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap Hero("John");
	Hero.attack("Gorila");
	Hero.highFivesGuys();
	Hero.guardGate();
	Hero.whoAmI();

	DiamondTrap Hero1("John fbfbxcbxcbx ");
	Hero1.attack("Gorila");
	Hero1.highFivesGuys();
	Hero1.guardGate();
	Hero1.whoAmI();

return 0;
}
