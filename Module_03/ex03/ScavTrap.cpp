/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:58:30 by abrun             #+#    #+#             */
/*   Updated: 2022/04/28 12:58:33 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void): ClapTrap("scaver", 100, 50, 20)
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap setName constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& trap):ClapTrap(trap.getName())
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->setHitpoints(trap.getHitpoints());
	this->setEnergyPoints(trap.getEnergyPoints());
	this->setAttackDamage(trap.getAttackDamage());
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& trap)
{
	std::cout << "ScavTrap copy assignment constructor called" << std::endl;
	this->setName(trap.getName());
	this->setHitpoints(trap.getHitpoints());
	this->setEnergyPoints(trap.getEnergyPoints());
	this->setAttackDamage(trap.getAttackDamage());
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (getEnergyPoints() <= 0 || getHitpoints() <= 0)
	{
		std::cout << "ScavTrap " << getName()
		<< " is too weak to attack" << std::endl;
	}
	else
	{
		decreaseEnergyPoints();
		std::cout << "ScavTrap " << getName() << " attack " << target
		<< ", causing " << getAttackDamage() << " points of damage !"
		<< std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (this->getEnergyPoints() <= 0 || getHitpoints() <= 0)
	{
		std::cout << "ScavTrap " << this->getName()
		<< " cannot use Gate" << std::endl;
	}
	else
	{
		this->decreaseEnergyPoints();
		std::cout << "ScavTrap " << this->getName() << " has enterred in Gate keeper mode"
		<< std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const ScavTrap& trap)
{
	os << "ScavTrap :\n\t_name : " << trap.getName() << "\n\t_hitpoins : " << trap.getHitpoints() << "\n\t_energy_points : " << trap.getEnergyPoints() << "\n\t_attack_damage : " << trap.getAttackDamage();
	return (os);
}
