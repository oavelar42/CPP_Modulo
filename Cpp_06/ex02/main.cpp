/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:11:23 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/22 22:30:07 by oavelar          ###   ########.fr       */
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

void identify(Base *pont)
{
    if (A == pont)
    std::cout << pont << "pontier" << std::endl;
}

void identify(Base &ref)
{
    if (A == ref)
    std::cout << ref << "reference" << std::endl;
}

int main(void)
{
    Base* classes;
    
    classes = generate();
    identify(classes);
    identify(*classes);

    delete classes;
}