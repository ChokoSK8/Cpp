/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:41:05 by abrun             #+#    #+#             */
/*   Updated: 2022/04/22 19:27:10 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Default constuctor called" << std::endl;
	this->myMap["DEBUG"] = 1;
	this->myMap["INFO"] = 2;
	this->myMap["WARNING"] = 3;
	this->myMap["ERROR"] = 4;
}

Harl::~Harl(void)
{
	std::cout << "Default destuctor called" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	n;

	n = 0;
	if (!level.compare("DEBUG") || !level.compare("INFO")
			|| !level.compare("WARNING") || !level.compare("ERROR"))
		n = this->myMap[level];
	switch (n)
	{
		case 1:
			this->debug();
		case 2:
			this->info();
		case 3:
			this->warning();
		case 4:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
