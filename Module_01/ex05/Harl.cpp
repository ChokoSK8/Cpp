/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:41:05 by abrun             #+#    #+#             */
/*   Updated: 2022/04/22 19:24:54 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Default constuctor called" << std::endl;
	this->myMap["DEBUG"] = &Harl::debug;
	this->myMap["INFO"] = &Harl::info;
	this->myMap["WARNING"] = &Harl::warning;
	this->myMap["ERROR"] = &Harl::error;
}

Harl::~Harl(void)
{
	std::cout << "Default destuctor called" << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptrF) (void);

	if (!level.compare("DEBUG") || !level.compare("INFO")
			|| !level.compare("WARNING") || !level.compare("ERROR"))
	{
		ptrF = this->myMap[level];
		(this->*ptrF) ();
	}
	else
		std::cout << "Sorry, Harl hasn't time for this **** !" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
