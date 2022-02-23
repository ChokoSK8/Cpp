/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:59:53 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 14:02:55 by abrun            ###   ########.fr       */
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

Animal::Animal(const Animal& ymir)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = ymir.getType();
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& ymir)
{
	std::cout << "Animal copy assignment constructor called" << std::endl;
	this->_type = ymir.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	if (this->_type == "Dog" || this->_type == "Cat")
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

std::ostream& operator<<(std::ostream& os, const Animal& ymir)
{
	os << "Animal :\n\t_type : " << ymir.getType();
	return (os);
}
