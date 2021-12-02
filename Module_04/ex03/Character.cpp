/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:30:05 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 14:51:22 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void)
{
	int	c = -1;

	std::cout << "Charactere default constructor called" << std::endl;
	while (++c < 4)
		this->_available[c] = 0;
}

Character::~Character(void)
{
	int	c = -1;
	std::cout << "Charactere destructor called" << std::endl;
	while (++c < 4)
	{
		if (_available[c])
			delete _inventory[c];
	}
}

Character::Character(std::string name)
{
	int	c = -1;

	std::cout << "Charactere setName constructor called" << std::endl;
	this->_name = name;
	while (++c < 4)
		this->_available[c] = 0;
}

Character& Character::operator=(const Character& charactere)
{
	int	c = -1;

	std::cout << "ICharactere copy constructor called" << std::endl;
	this->_name = charactere.getName();
	this->_inventory[0] = charactere._inventory[0];
	while (++c < 4)
		this->_available[c] = charactere._available[c];
	return (*this);
}

std::string const& Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int	c = -1;

	while (++c < 4)
	{
		if (!this->_available[c])
		{
			this->_inventory[c] = m->clone();
			this->_available[c] = 1;
			c = 4;
		}
	}
}

void	Character::unequip(int idx)
{
	this->_available[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_available[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "Pas d'objet à la case " << std::to_string(idx) << std::endl;
}
