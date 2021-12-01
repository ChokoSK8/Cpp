/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:47:10 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 17:16:48 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharactere.hpp"
#include <iostream>

ICharacter::ICharacter(std::string name)
{
	std::cout << "ICharactere setName constructor called" << std::endl;
	this->_name = name;
}

ICharacter::~ICharacter(void)
{
	std::cout << "ICharactere destructor called" << std::endl;
}

ICharacter& operator=(const ICharacter& character)
{
	std::cout << "ICharactere copy constructor called" << std::endl;
	this->_name = character.getName();
	this->_inventory[0] = this->_inventory[0];
}

std::string const& ICharacter::getName(void) const
{
	return (this->_name);
}

void	ICharacter::equip(AMateria* m)
{
	int	c = -1;

	while (++c < 4)
	{
		if (!this->_inventory[c])
		{
			this->_inventory[c] = m;
			c = 4;
		}
	}
}

void	ICharacter::unequip(int idx)
{
	this->_inventory[idx] = 0;
}

void	ICharacter::use(int idx, ICharacter& target)
{
	this->_inventory[idx].use(target);
}
