/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:18:27 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/02 13:49:55 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include <iostream>
#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
    public :
            WrongCat(void);
            WrongCat(WrongCat const& copy);
            WrongCat& operator=(WrongCat const& copy);
            virtual ~WrongCat(void);

            virtual void makeSound(void) const;

};

#endif