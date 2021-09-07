/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:01:45 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/07 22:49:27 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen karen_crazy;

    if (ac != 2)
	{
		std::cout << RED "Error: Invalid number of arguments." OFF << std::endl;
		return 1;
	}
	karen_crazy.complain(av[1]);
    return 0;
}