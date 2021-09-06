/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 21:37:01 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/06 19:19:42 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;

     
    if (ac != 4)
    {
        std::cout << "Error: Arguments number incorrect" << std::endl;
        return 1;
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    
}