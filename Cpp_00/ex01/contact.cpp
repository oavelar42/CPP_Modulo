/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:05:03 by oavelar           #+#    #+#             */
/*   Updated: 2021/08/31 17:40:59 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void        Contact::addContact(void)
{
    std::cout << "\n";
    std::cout << "First name : ";
    std::getline(std::cin, firstName);
}

void        Contact::displayContact(int a) const
{
    std::cout << std::setw(10) << a << "|";
    ft_len(firstName, 0);
    std::cout << std::endl;
}

void        Contact::displayWrite(void) const
{
    std::cout << "First Name: " << firstName << std::endl;
}