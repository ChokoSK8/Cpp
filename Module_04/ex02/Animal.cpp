/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:59:53 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 11:31:11 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	setType("");
}

Animal::Animal(std::string type)
{
	std::cout << "Animal setType constructor called" << std::endl;
	setType(type);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	if (this->_type == "dog" || this->_type == "cat")
		this->makeSound();
	else
		std::cout << "Grrrrrrrr" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}
