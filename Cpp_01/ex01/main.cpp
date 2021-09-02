/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:15:54 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/02 17:25:26 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie *count;

    count = zombieHorde(6, "atecuBaNòS");
    for (int i = 0 ; i < 6 ; i++)
        count[i].announce();
    delete []count;
    return (0);
}