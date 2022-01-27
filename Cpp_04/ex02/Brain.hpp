/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:56:47 by oavelar           #+#    #+#             */
/*   Updated: 2022/01/27 15:38:16 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

#include <iostream>
#include <string>

class Brain
{
    private :

            std::string ideias[100];

    public :

            Brain(void);
            Brain(Brain const& copy);
            Brain& operator=(Brain const& copy);
            virtual ~Brain(void);     
};

#endif