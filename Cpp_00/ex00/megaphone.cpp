/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:11:52 by oavelar           #+#    #+#             */
/*   Updated: 2021/08/31 14:47:04 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int convert_lower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < ac ; i++)
    {
        for (int j = 0 ; av[i][j] ; j++)
        {
            if (convert_lower(av[i][j]) == 1)
                av[i][j] -=  32;
        }
        std::cout << av[i];
    }
    std::cout << "\n";
    return (0);
}