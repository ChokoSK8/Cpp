/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:41:05 by abrun             #+#    #+#             */
/*   Updated: 2022/02/16 13:56:25 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "Default constuctor called" << std::endl;
	this->myMap["DEBUG"] = 1;
	this->myMap["INFO"] = 2;
	this->myMap["WARNING"] = 3;
	this->myMap["ERROR"] = 4;
}

Karen::~Karen(void)
{
	std::cout << "Default destuctor called" << std::endl;
}

void	Karen::complain(std::string level)
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
			break;
		case 2:
			this->info();
			break;
		case 3:
			this->warning();
			break;
		case 4:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
	info();
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
	warning();
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
	error();
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
