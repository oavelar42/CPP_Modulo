/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:01:37 by oavelar           #+#    #+#             */
/*   Updated: 2021/09/07 22:00:13 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
    std::cout << RED "They made Karen crazy..." OFF << std::endl;
}

void	Karen::complain(std::string level)
{
	void	(Karen::*funcs)();

	(!level.compare("DEBUG")) && (funcs = &Karen::debug);
	(!level.compare("INFO")) && (funcs = &Karen::info);
	(!level.compare("WARNING")) && (funcs = &Karen::warning);
	(!level.compare("ERROR")) && (funcs = &Karen::error);
	(this->*funcs)();
}

void Karen::debug(void) {
	std::cout << LET "I love to get extra bacon for my 7XL-double-cheese-triple" <<
	"-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void) {
	std::cout << "I cannot believe adding extra" <<
	"bacon cost more money. You don’t put enough!" <<
	"If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been" <<
	"coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." OFF << std::endl;
    std::cout << "\n";
}

Karen::~Karen(void)
{
    std::cout << RED "Karen crazy has left!" OFF << std::endl;
}