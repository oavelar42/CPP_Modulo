/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:10:25 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/12 17:23:01 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Conversion str(av[1]);
        std::cout << str << std::endl;
    }
    else
        std::cout << "Error: ./convert <string>" << std::endl;
    return (0);
}