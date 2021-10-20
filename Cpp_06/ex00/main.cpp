/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:10:25 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/20 16:35:43 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
        Conversion Conversion(av[1]);
        Conversion.toChar();
        Conversion.toInt();
        Conversion.toFloat();
        Conversion.toDouble();
	}
    else
        std::cout << "Error: ./convert <string>" << std::endl;
    return (0);
}