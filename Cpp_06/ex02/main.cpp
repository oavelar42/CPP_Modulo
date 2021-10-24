/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:11:23 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/24 18:43:02 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
    srand(time(NULL));

    switch (rand() % 3)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
    }
    return (NULL);
}

void identify(Base *pointer)
{
    if (dynamic_cast<A *>(pointer))
        std::cout << "Class A" << std::endl;
    else if (dynamic_cast<B *>(pointer))
        std::cout << "Class B" << std::endl;
    else if (dynamic_cast<C *>(pointer))
        std::cout << "Class C" << std::endl;
}

void identify(Base &ref)
{
    Base result;
	try
	{
        A result;
		result = dynamic_cast<A &>(ref);
		std::cout << "Class A" << std::endl;
	}
	catch (std::exception &exception){}
    try
	{
        B result;
		result = dynamic_cast<B &>(ref);
		std::cout << "Class B" << std::endl;
	}
	catch (std::exception &exception){}
    try
	{
        C result;
		result = dynamic_cast<C &>(ref);
		std::cout << "Class C" << std::endl;
	}
	catch (std::exception &exception){}
}

int main(void)
{
    Base* classes;
    
    classes = generate();
    identify(classes);
    identify(*classes);

    delete classes;
}