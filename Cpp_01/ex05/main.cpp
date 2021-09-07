/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:01:45 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/07 21:46:49 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
    Karen karen_crazy;

    karen_crazy.complain("DEBUG");
    karen_crazy.complain("INFO");
    karen_crazy.complain("WARNING");
    karen_crazy.complain("ERROR");
    return 0;
}