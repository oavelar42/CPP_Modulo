/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:58:58 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/27 22:34:18 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_HPP
# define WRONG_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include <iostream>
#include <string>

class WrongAnimal
{
    protected : 
            std::string type;
    
    public :
            WrongAnimal(void);
            WrongAnimal(WrongAnimal const& copy);
            WrongAnimal& operator=(WrongAnimal const& copy);
            virtual ~WrongAnimal(void);

            std::string getType(void) const;
            void makeSound(void) const;

};

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