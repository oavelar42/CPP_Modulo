/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:17:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/02 17:31:50 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde( int N, std::string name)
{
    Zombie *count;
    count = new Zombie[N];
    for (int i = 0 ; i < N ; i++)
        count[i].getName(name);
    return (count);
}