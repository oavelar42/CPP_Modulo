/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:53 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/27 21:49:15 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    delete [] mirror;
    
    return 0;
}










/*
int         main(void)
{
    Array<int>	arr(4);

    int * a = new int();

    std::cout << "zero" << std::endl;
    std::cout << *a << std::endl;

	std::cout << std::endl;
    try {
	    for (unsigned int i = 0; i < arr.size(); ++i)
		    std::cout << "1. " << i << " | " << arr[i] << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "size: " << arr.size() << std::endl;
	std::cout << std::endl;
    
    
    std::cout << "int" << std::endl;
	for (unsigned int i = 0; i < arr.size(); ++i)
	{
        arr[i] = 21 * (i % 4);
		std::cout << "2. " << arr[i] << std::endl;
	}
	std::cout << "size: " << arr.size() << std::endl << std::endl;



    std::cout << "float" << std::endl;
    Array<float>    floats(7);
    for (int i = 0; i < 7; ++i){
        floats[i] = 1.0 / (i + 2);
	    std::cout << floats[i] << std::endl;
    }
	std::cout << "size: " << floats.size() << std::endl << std::endl;

    
    Array<std::string> str(5);
    str[0] = "42";
    str[1] = " the";
    str[2] = " best";
    str[3] = " school";
    str[4] = " in the world";
    try {
        str[5]= "test";
        str[-4]= "test";
    }
    catch (const std::out_of_range& e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << str[0] << str[1] << str[2] << str[3] << std::endl;
	std::cout << "size: " << str.size() << std::endl << std::endl;

    system("leaks Array | grep bytes");
    return 0;
}*/