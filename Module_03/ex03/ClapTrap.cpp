/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:11:49 by abrun             #+#    #+#             */
/*   Updated: 2021/11/30 13:37:01 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_hitpoints < 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " attack " << target
			<< ", causing " << this->_attack_damage << " points of damage !"
			<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints < 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount
			<< " amounts of damage !" << std::endl;
		this->_hitpoints -= amount;
		if (this->_hitpoints < 0)
		{
			std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints < 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is taking a healing potion of "
			<< amount << " points !" << std::endl;
		this->_hitpoints += amount;
	}
}
