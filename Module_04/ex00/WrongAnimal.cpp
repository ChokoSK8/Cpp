/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:14:11 by abrun             #+#    #+#             */
/*   Updated: 2022/05/04 16:04:50 by abrun            ###   ########.fr       */
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

WrongAnimal::WrongAnimal(const WrongAnimal& ymir)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = ymir.getType();
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& ymir)
{
	std::cout << "WrongAnimal copy assignment constructor called" << std::endl;
	this->_type = ymir.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Blublublublu" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}
