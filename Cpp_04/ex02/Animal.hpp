/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:58:55 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/27 21:36:12 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include <iostream>
#include <string>

class Animal
{
    public :
            Animal(void);
            Animal(Animal const& copy);
            Animal& operator=(Animal const& copy);
            virtual ~Animal(void);

            std::string getType(void) const;
            virtual void makeSound(void) const = 0;

    protected :
            std::string type;
};

#endif