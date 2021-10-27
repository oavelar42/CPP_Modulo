/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:01:28 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/26 18:19:04 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# define RED "\x1B[31m"
# define GRE "\x1B[32m"
# define OFF "\033[0m"

#include <iostream>
#include <string>

template<class T>

void print(T& str)
{
    std::cout << str << std::endl;
}

template<class T>

void iter(T *array, int len, void func(T const &))
{
    for(int i = 0; i < len; i++)
        func(array[i]);
}


#endif