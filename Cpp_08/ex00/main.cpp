/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:43:15 by oavelar           #+#    #+#             */
/*   Updated: 2021/11/19 22:19:40 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::cout << RED "------Vector test------" OFF << std::endl; 
    std::cout << "\n";
    std::vector<int> vec;
    for (int i = 0; i <= 10; i++){
        vec.push_back(i);
    }

    try
    {
        std::vector<int>::const_iterator res = easyfind(vec, 1);
        std::cout << "Number : " << *res << " found!" << std::endl;

        std::vector<int>::const_iterator res1 = easyfind(vec, 2);
        std::cout << "Number : " << *res1 << " found!" << std::endl;

        std::vector<int>::const_iterator res2 = easyfind(vec, 10);
        std::cout << "Number : " << *res2 << " found!" << std::endl;

        std::vector<int>::const_iterator res3 = easyfind(vec, -42);
        std::cout << "Number : " << *res3 << " found!" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Number not found!" << std::endl;
    }


    std::cout << "\n";
    std::cout << GRE "------List test------" OFF << std::endl;  
    std::cout << "\n";

    std::list<int> list;
    for (int i = 0; i <= 10; i++){
        list.push_back(i);
    }

    try
    {
        std::list<int>::const_iterator res = easyfind(list, 5);
        std::cout << "Number : " << *res << " found!" << std::endl;

        std::list<int>::const_iterator res1 = easyfind(list, 7);
        std::cout << "Number : " << *res1 << " found!" << std::endl;

        std::list<int>::const_iterator res2 = easyfind(list, 3);
        std::cout << "Number : " << *res2 << " found!" << std::endl;

        std::list<int>::const_iterator res3 = easyfind(list, -42);
        std::cout << "Number : " << *res3 << " found!" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Number not found!" << std::endl;
    }
    
    return (0);
}