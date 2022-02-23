/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:51:05 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 14:02:02 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void):Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& ymir):Animal(ymir.getType())
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& ymir)
{
	std::cout << "Cat copy assignment constructor called" << std::endl;
	this->_type = ymir.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "The " << getType() << " says : Meeeoooow" << std::endl;
}
