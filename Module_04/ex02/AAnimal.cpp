/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:59:53 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 15:00:41 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default constructor called" << std::endl;
	setType("");
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "AAnimal setType constructor called" << std::endl;
	setType(type);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void	AAnimal::makeSound(void) const
{
	if (this->_type == "dog" || this->_type == "cat")
		this->makeSound();
	else
		std::cout << "Grrrrrrrr" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}
