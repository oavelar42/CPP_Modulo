/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:24:00 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/21 22:27:22 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap ota;
	FragTrap ota1(RED "Acerola " OFF);
	FragTrap ota2(GRE "Laranjinha " OFF);

	ota.attack("Perdeu, perdeu ");
	ota1.takeDamage(22);

	ota2.attack("Meu nome é ");
	ota2.takeDamage(55);
	ota.highFivesGuys();
    ota2.beRepaired(38);


	return 0;
}
