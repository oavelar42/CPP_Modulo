/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 22:12:22 by oavelar           #+#    #+#             */
/*   Updated: 2021/08/31 21:28:50 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# define YEL "\033[33;1m"
# define RED "\033[31m"
# define OFF "\033[0m"
# define LET "\n\033[1m"

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
    private:
            std::string firstName;
            std::string lastName;
            std::string nickName;
            std::string phoneNum;
            std::string darkestSecret;
    public:
            Contact(void) {}
            //~Contact(void) {}
            void    addContact(void);
            void    displayContact(int a) const;
            void    displayWrite(void) const;
};

void        ft_len(std::string str, int end);
void        searchContact(Contact phonebook[], int count);

#endif