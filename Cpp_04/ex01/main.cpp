/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:22:21 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 22:54:05 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Wrong.hpp"

int main(void)
{
    std::cout << GRE "__________Correct__________\n" OFF << std::endl;

    const Animal* meta = new Animal();
    const Animal* i = new Dog();
    const Animal* j = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();                                 //will output the cat sound !
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;

    std::cout << RED "\n___________Incorrect___________\n" OFF << std::endl; 

    const WrongAnimal* wronganimal = new WrongAnimal();
    const WrongCat* wrongcat = new WrongCat();

    std::cout << wrongcat->getType() << " " << std::endl;
    wrongcat->makeSound();
    wronganimal->makeSound();

    delete wronganimal;
    delete wrongcat;

    return (0);
}