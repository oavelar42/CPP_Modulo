/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:01:41 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/07 22:39:38 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# define OTA "\x1B[36m"
# define RED "\x1B[31m"
# define OFF "\033[0m"
# define GRE "\x1B[32m"
# define LET "\n\033[1m"

#include <iostream>
# include <string>

class Karen
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        
    public:
        Karen(void);
        ~Karen(void);
        void complain( std::string level );
};

#endif