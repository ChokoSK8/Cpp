/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:14:11 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 12:29:19 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	setType("");
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal setType constructor called" << std::endl;
	setType(type);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	if (getType() == "cat")
		this->makeSound();
	else
		std::cout << "Grrrrrrrrrrr" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}
