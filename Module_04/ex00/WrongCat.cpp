/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:20:11 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 14:03:14 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void):WrongAnimal("Cat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& ymir):WrongAnimal(ymir.getType())
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& ymir)
{
	std::cout << "WrongCat copy assignment constructor called" << std::endl;
	this->_type = ymir.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "The " << getType() << " says : Wouf Wouf !" << std::endl;
}
