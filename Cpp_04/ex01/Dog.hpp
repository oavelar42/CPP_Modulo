/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:22:28 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 22:08:26 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog(void);
        Dog(Dog const& copy);
        Dog& operator=(Dog const& copy);
        virtual ~Dog(void);

        virtual void makeSound(void) const;
};

#endif