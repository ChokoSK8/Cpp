/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:41:05 by abrun             #+#    #+#             */
/*   Updated: 2021/11/28 18:22:57 by abrun            ###   ########.fr       */
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

	ptr_fct = NULL;
	if (level.compare("DEBUG") == 0)
		ptr_fct = &Karen::debug;
	else if (level.compare("INFO") == 0)
		ptr_fct = &Karen::info;
	else if (level.compare("WARNING") == 0)
		ptr_fct = &Karen::warning;
	else if (level.compare("ERROR") == 0)
		ptr_fct = &Karen::error;
	if (ptr_fct)
		(this->*ptr_fct) ();
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
