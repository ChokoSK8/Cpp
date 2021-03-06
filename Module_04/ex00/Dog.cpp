/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:47:30 by abrun             #+#    #+#             */
/*   Updated: 2022/02/27 12:25:18 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void):Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& ymir):Animal(ymir)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& ymir)
{
	std::cout << "Dog copy assignment constructor called" << std::endl;
	this->_type = ymir.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "The " << getType() << " says : Wouf Wouf !" << std::endl;
}
