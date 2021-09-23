/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:24:00 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/23 17:28:25 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	//FragTrap ota;
	FragTrap ota1(RED "Zé pequeno " OFF);
	FragTrap ota2(GRE "Byscapé " OFF);

	ota2.attack(", perdeu, perdeu ");
	ota1.takeDamage(22);

	ota1.attack("marreco ");
	ota2.takeDamage(15);
	ota1.highFivesGuys();
    ota2.beRepaired(38);


	return 0;
}
