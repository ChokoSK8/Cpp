/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:41:05 by abrun             #+#    #+#             */
/*   Updated: 2022/02/16 13:44:29 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "Default constuctor called" << std::endl;
	this->myMap["DEBUG"] = &Karen::debug;
	this->myMap["INFO"] = &Karen::info;
	this->myMap["WARNING"] = &Karen::warning;
	this->myMap["ERROR"] = &Karen::error;
}

Karen::~Karen(void)
{
	std::cout << "Default destuctor called" << std::endl;
}

void	Karen::complain(std::string level)
{
	void	(Karen::*ptrF) (void);

	if (!level.compare("DEBUG") || !level.compare("INFO")
			|| !level.compare("WARNING") || !level.compare("ERROR"))
	{
		ptrF = this->myMap[level];
		(this->*ptrF) ();
	}
	else
		std::cout << "Sorry, Karen hasn't time for this **** !" << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
