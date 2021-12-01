/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:47:30 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 17:09:21 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void):Animal("dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(std::string ideas):Animal("dog")
{
	std::cout << "Dog setBrain constructor called" << std::endl;
	this->_brain = new Brain(ideas);
}

Dog&	Dog::operator=(const Dog& dogo)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain[0] = dogo._brain[0];
	this->_type = dogo.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "The " << getType() << " says : Wouf Wouf !" << std::endl;
}

void	Dog::display_brain(void) const
{
	this->_brain->display_ideas();
}
