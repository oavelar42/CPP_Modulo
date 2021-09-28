/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:22:21 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/28 22:20:35 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

#define ANIMAL 10

int main( void ) 
{
	std::cout << "\n------------CONSTRUCTOR------------\n" << std::endl;

	Animal	*animal[ANIMAL];

	for (int i = 0; i < ANIMAL; i++) {
		if (i % 2)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}

	std::cout << "\n----------COPY/DESTRUCTOR----------\n" << std::endl;

	for (int i = 0; i < ANIMAL; i++) {
		std::cout << '|' << animal[i]->getType() << "| ";

		animal[i]->makeSound();
		delete animal[i];

		std::cout << std::endl;
	}

    return (0);
}