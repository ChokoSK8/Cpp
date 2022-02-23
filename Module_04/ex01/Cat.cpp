/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:51:05 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 14:34:15 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void):Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& ymir):Animal(ymir.getType())
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*ymir._brain);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat&	Cat::operator=(const Cat& ymir)
{
	std::cout << "Cat copy assignment constructor called" << std::endl;

	delete this->_brain;
	if (ymir._brain)
	{
		this->_brain = new Brain();
		*this->_brain = *ymir._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "The " << getType() << " says : Meeeoooow" << std::endl;
}

void	Cat::displayBrain(void) const
{
	this->_brain->displayIdeas();
}

void	Cat::setBrain(int n, std::string id)
{
	this->_brain->setIdeas(n, id);
}
