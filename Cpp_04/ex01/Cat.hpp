/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:22:31 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/28 14:02:59 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include <iostream>
#include "Animal.hpp"
#include <string>
#include "Brain.hpp"

class Cat : public Animal
{
    private :
            Brain* brain;

    public :
            Cat(void);
            Cat(Cat const& copy);
            virtual Cat& operator=(Cat const& copy);
            virtual ~Cat(void);
            
            virtual void makeSound(void) const;
};

#endif