/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:47:30 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 14:44:12 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void):Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& ymir):Animal(ymir.getType())
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*ymir._brain);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog&	Dog::operator=(const Dog& ymir)
{
	std::cout << "Dog copy assignment constructor called" << std::endl;
	delete this->_brain;
	if (ymir._brain)
	{
		this->_brain = new Brain();
		*this->_brain = *ymir._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "The " << getType() << " says : Wouf Wouf !" << std::endl;
}

void	Dog::displayBrain(void) const
{
	this->_brain->displayIdeas();
}

void	Dog::setBrain(int n, std::string id)
{
	this->_brain->setIdeas(n, id);
}
