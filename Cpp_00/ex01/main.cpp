/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:35:19 by oavelar           #+#    #+#             */
/*   Updated: 2021/08/30 22:38:11 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main()
{
    std::string input;
    //int         count;
    //contact     phonebook[8];

    std::cout << YEL "------ PHONE BOOK ------" OFF << std::endl;
    //count = 0;
    while (1)
    {
        std::cout << LET "What do you need ?" OFF << std::endl;
        std::getline(std::cin, input);
    }
    return (0);
}