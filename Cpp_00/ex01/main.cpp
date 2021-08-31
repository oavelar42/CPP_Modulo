/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:35:19 by oavelar           #+#    #+#             */
/*   Updated: 2021/08/31 17:43:28 by oavelar          ###   ########.fr       */
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

int main()
{
    std::string input;
    int         count;
    Contact     phonebook[8];

    std::cout << YEL "------ PHONE BOOK ------" OFF << std::endl;
    count = 0;
    while (1)
    {
        std::cout << LET "What do you need ?" OFF << std::endl;
        std::getline(std::cin, input);
        if (input.compare("ADD") == 0)
        {
            if (count >= 8)
                std::cout << RED "You are full in your Phone Book" OFF << std::endl;
            else
            {
                phonebook[count].addContact();
                ++count;
            }
        }
        //else if (input.compare("SEARCH") == 0)
        //    searchContact(phonebook, i);
        else if (input.compare("EXIT") == 0)
            return (0);
        else if (input.compare("") == 1)
            std::cout << RED "Unknow request" OFF << std::endl;
    }
}