/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:09:27 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/07 17:33:57 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream file(av[1]);
        if (!file.is_open())
            std::cout << "Operation file corrupted!" << std::endl;
        if (file.peek() == EOF)  // use peek for check file is empty , if its empty turn error!
            std::cout << "File is empty..." << std::endl;
        std::string line;
        std::string s1 = av[2];
        std::string s2 = av[3];
        if (s1.empty() || s2.empty())  // use empty() for chech string , if its len = 0 turn error!
            std::cout << "s1 or s2 is empty." << std::endl;
        std::string replace = ".replace";
        std::string new_file = av[1] + replace;
        std::ofstream replace_file(new_file);
        if (!replace_file.is_open())
            std::cout << "Failed to create new file!" << std::endl;
        int count;
        while (file)
        {
            getline(file, line);
            count = 0;
            while (1)
            {
                count = line.find(s1, count);
                if (count == 0)
                {
                    replace_file << line;
                    if (!file.eof())
                        replace_file << "\n";
                    break ;
                }
                else
                {
                    line = line.insert(count, s2).erase(count + s2.length(), s1.length());
                    count += s2.length();
                }
            }
        }
    }
    else
        std::cout << "Wrong arguments!!!" << std::endl;
    return (0);
}