/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:29:35 by oavelar           #+#    #+#             */
/*   Updated: 2021/10/22 22:02:57 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class Base 
{
    public : 

            virtual ~Base() { };
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif