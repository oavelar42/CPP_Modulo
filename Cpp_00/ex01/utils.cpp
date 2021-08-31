/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:55:32 by oavelar           #+#    #+#             */
/*   Updated: 2021/08/31 21:35:54 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void    ft_len(std::string str, int end)
{
    if (str.length() >= 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
    if (end == 0)
        std::cout << "|";
}

void    searchContact(Contact phonebook[], int count)
{
    ft_len("Index", 0);
    ft_len("First Name", 0);
    ft_len("Last Name", 0);
    ft_len("Nickname", 1);
    std::cout << std::endl
                << "----------|"
                << "----------|"
                << "----------|"
                << "----------" << std::endl;
    for (int a = 0 ; a < count ; a++)
        phonebook[a].displayContact(a);
    std::cout << "\nEnter index :" << std::endl;
    std::string a;
    std::getline(std::cin, a);           
}