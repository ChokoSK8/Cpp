/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:41:05 by abrun             #+#    #+#             */
/*   Updated: 2021/11/28 19:29:31 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{
	void	(Karen::*ptr_fct) (void);
	int	n;

	n = 0;
	if (level.compare("DEBUG") == 0)
		n = 1;
	else if (level.compare("INFO") == 0)
		n = 2;
	else if (level.compare("WARNING") == 0)
		n = 3;
	else if (level.compare("ERROR") == 0)
		n = 4;
	switch (n)
	{
		case 1:
			ptr_fct = &Karen::debug;
			break;
		case 2:
			ptr_fct = &Karen::info;
			break;
		case 3:
			ptr_fct = &Karen::warning;
			break;
		case 4:
			ptr_fct = &Karen::error;
			break;
		default:
			ptr_fct = NULL;
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	if (ptr_fct)
		(this->*ptr_fct) ();
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
