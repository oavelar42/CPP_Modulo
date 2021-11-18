/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:43:15 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/18 15:22:55 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::cout << RED "------Vector test------" OFF << std::endl; 
    std::cout << "\n";
    std::vector<int> teste;
    teste.push_back(2);
    teste.push_back(1);
    teste.push_back(4);

    try
    {
        std::vector<int>::const_iterator res = easyfind(teste, 1);
        std::cout << *res << std::endl;

        std::vector<int>::const_iterator res1 = easyfind(teste, 2);
        std::cout << *res1 << std::endl;

        std::vector<int>::const_iterator res2 = easyfind(teste, 3);
        std::cout << *res2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Not found!" << std::endl;
    }

    return (0);
}