/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:17:41 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/02 17:32:48 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

# include <iostream>

class Zombie
{
    private:
            std::string name_1;

    public:
            Zombie(std::string name);
            Zombie(void);
            ~Zombie();
            void announce( void );
            void getName(std::string name);
};

Zombie *zombieHorde( int N, std::string name );

#endif