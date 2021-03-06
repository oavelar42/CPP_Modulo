/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:05:03 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/01 15:56:09 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void        Contact::addContact(void)
{
    std::cout << "\n";
    std::cout << "First name : ";
    std::getline(std::cin, firstName);
    std::cout << "Last name : ";
    std::getline(std::cin, lastName);
    std::cout << "Nickname : ";
    std::getline(std::cin, nickName);
    std::cout << "Phone Number : ";
    std::getline(std::cin, phoneNum);
    std::cout << "Darkest Secret : ";
    std::getline(std::cin, darkestSecret);
}

void        Contact::displayContact(int a) const
{
    std::cout << std::setw(10) << a << "|";
    ft_len(firstName, 0);
    ft_len(lastName, 0);
    ft_len(nickName, 1);
    std::cout << std::endl;
}

void        Contact::displayWrite(void) const
{
    std::cout   << "First Name: " << firstName << std::endl
                << "Last Name: " << lastName << std::endl
                << "Nickname: " << nickName << std::endl
                << "Phone Number: " << phoneNum << std::endl;
}