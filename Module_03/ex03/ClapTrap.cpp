/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:11:49 by abrun             #+#    #+#             */
/*   Updated: 2022/02/21 16:11:15 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& trap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = trap._name;
	this->_hitpoints = trap._hitpoints;
	this->_energy_points = trap._energy_points;
	this->_attack_damage = trap._attack_damage;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap)
{
	std::cout << "ClapTrap copy assignment constructor called" << std::endl;
	this->_name = trap._name;
	this->_hitpoints = trap._hitpoints;
	this->_energy_points = trap._energy_points;
	this->_attack_damage = trap._attack_damage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->getName()
		<< " is too weak to attack" << std::endl;
	}
	else
	{
		this->_energy_points -= 1;
		std::cout << "ClapTrap " << this->_name << " attack " << target
		<< ", causing " << this->_attack_damage << " points of damage !"
		<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount
		<< " amounts of damage !" << std::endl;
	this->_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->getName()
		<< "is too weak to attack" << std::endl;
	}
	else
	{
		this->_energy_points -= 1;
		std::cout << "ClapTrap " << this->_name
		<< " is taking a healing potion of "
		<< amount << " points !" << std::endl;
	}
	this->_hitpoints += amount;
}

void	ClapTrap::decreaseEnergyPoints(void)
{
	this->_energy_points -= 1;
}

void	ClapTrap::setName(std::string n)
{
	this->_name = n;
}

void	ClapTrap::setHitpoints(int n)
{
	this->_hitpoints = n;
}

void	ClapTrap::setEnergyPoints(int n)
{
	this->_energy_points = n;
}

void	ClapTrap::setAttackDamage(int n)
{
	this->_attack_damage = n;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitpoints(void) const
{
	return (this->_hitpoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& trap)
{
	os << "ClapTrap :\n\t_name : " << trap.getName() << "\n\t_hitpoins : " << trap.getHitpoints() << "\n\t_energy_points : " << trap.getEnergyPoints() << "\n\t_attack_damage : " << trap.getAttackDamage();
	return (os);
}
