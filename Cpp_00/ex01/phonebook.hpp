/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 22:12:22 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/01 15:55:57 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define LET "\n\033[1m"
# define GRE "\x1B[32m"

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
            void    addContact(void);
            void    displayContact(int a) const;
            void    displayWrite(void) const;
};

void        ft_len(std::string str, int end);
void        searchContact(Contact phonebook[], int count);

#endif