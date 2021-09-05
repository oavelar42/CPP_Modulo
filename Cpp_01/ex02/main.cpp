/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:36:14 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/05 14:52:29 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"

int main(void)
{
    std::string      str = "HI THIS IS BRAIN";
    std::string      *ptr = &str;
    std::string      &ref = str;

    std::cout << RED "- STR turn the sentence | &STR turn address -" OFF 
              << std::endl;
    std::cout << "&STR  :  " << &str << std::endl;
    std::cout << "STR   :  " << str << std::endl;
    
    std::cout << "\n";
    
    std::cout << GRE "- *PTR turn the sentence | PTR turn address -" OFF 
              << std::endl;
    std::cout << "PTR   :  " << ptr << std::endl;
    std::cout << "*PTR  :  " << *ptr << std::endl;

    std::cout << "\n";
    
    std::cout << OTA "- REF turn the sentence | &REF turn address -" OFF 
              << std::endl;
    std::cout << "&REF  :  " << &ref << std::endl;
    std::cout << "REF   :  " << ref << std::endl;
    
}
