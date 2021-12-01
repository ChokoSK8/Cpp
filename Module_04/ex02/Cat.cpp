/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:51:05 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 15:05:28 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void):Animal("cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(std::string ideas):Animal("cat")
{
	std::cout << "Cat setBrain constructor called" << std::endl;
	this->_brain = new Brain(ideas);
}

Cat&	Cat::operator=(const Cat& cata)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain[0] = cata._brain[0];
	this->_type = cata.getType();
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "The " << getType() << " says : Meeeoooow" << std::endl;
}

void	Cat::display_brain(void) const
{
	this->_brain->display_ideas();
}
