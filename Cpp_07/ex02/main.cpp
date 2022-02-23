/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:06:53 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/22 15:34:59 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int, char**)
{
    std::cout << "\n----------- Subject test -----------\n" << std::endl;
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
        //std::cout << "Numbers random: " << i << std::endl;
    }

    delete [] mirror;

    //my test
	std::cout << "\n--------- My test ---------\n" << std::endl;
	{
		std::cout << "\n--------- int test --------\n" << std::endl;
		Array<int> num(10);
		for (unsigned int i = 0; i < num.size(); i++)
			num[i] = i;
		for (unsigned int i = 0; i < num.size(); i++)
			std::cout << num[i] << ' ';
		std::cout << std::endl;
	}

	{
		std::cout << "\n-------- char test --------\n" << std::endl;
		Array<char> let(10);
		for (unsigned int i = 0; i < let.size(); i++)
			let[i] = i + 65;
		for (unsigned int i = 0; i < let.size(); i++)
			std::cout << let[i] << ' ';
		std::cout << std::endl;
	}

	std::cout << "\n------------ Copy test ------------\n" << std::endl;
	{
		Array<int> num(10);
		for (unsigned int i = 0; i < num.size(); i++)
			num[i] = i;
		std::cout << " Int array test : ";
		for (unsigned int i = 0; i < num.size(); i++)
			std::cout << num[i] << ' ';
		std::cout << std::endl;
		
        std::cout << " Copy test : ";
		Array<int> CopyArray(num);
		CopyArray[4] = 42;
		for (unsigned int i = 0; i < CopyArray.size(); i++)
			std::cout << CopyArray[i] << ' ';
		std::cout << std::endl;
		
        Array<int> emptyArray(0);
        for (unsigned int i = 0; i < emptyArray.size(); i++)
            emptyArray[i] = i;
        std::cout << " Empty test : ";
		for (unsigned int i = 0; i < emptyArray.size(); i++)
			std::cout << emptyArray[i] << ' ';
		std::cout << emptyArray.size() << std::endl;
	}
}
