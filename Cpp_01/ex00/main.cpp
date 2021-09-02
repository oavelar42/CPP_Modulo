/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:16:38 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/02 14:47:01 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie zombie("Jack Daniels");
    zombie.announce();
    Zombie *zombie1;

    zombie1 = newZombie("Johnnie Walker");
    randomChump("Jägermeister");
    delete zombie1;
    
    return(0);
}