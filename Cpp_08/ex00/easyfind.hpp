/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:44:05 by oavelar           #+#    #+#             */
/*   Updated: 2022/02/23 14:03:14 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define RED "\x1B[31m"
# define GRE "\x1B[32m"
# define YEL "\x1B[33m"
# define MAG "\x1B[35m"
# define OFF "\033[0m"

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T &container, int val)
{
    typename T::iterator res;

    res = std::find(container.begin(), container.end(), val);

    if (container.end() == res)
        throw std::exception();
    return res;
}

#endif