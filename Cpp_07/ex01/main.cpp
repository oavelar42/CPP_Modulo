/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:01:01 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/26 18:25:52 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int num[] = {'*', 2, 0, 2, 1};
    std::cout << RED "Array Number :" OFF << std::endl;
    iter(num, 5, print);

    std::cout << "\n";

    std::string str[4] = {"école", "42", "the", "best"};
	std::cout << GRE "Array string :" OFF << std::endl;
	iter(str, 4, print);
    
    return 0;
}