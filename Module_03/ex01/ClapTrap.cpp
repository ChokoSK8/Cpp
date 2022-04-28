/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:11:49 by abrun             #+#    #+#             */
/*   Updated: 2022/04/28 17:02:08 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("claper"), _hitpoints(10), _energy_points(10),
		_attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10),
		_attack_damage(0)
{
	std::cout << "ClapTrap setName constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitpoints, unsigned int energy_points,
		unsigned int attack_damage) : _name(name), _hitpoints(hitpoints), 	
		_energy_points(energy_points), _attack_damage(attack_damage)
{
	std::cout << "ClapTrap setParam constructor called" << std::endl;
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
	if (this->_energy_points <= 0 || this->_hitpoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name
		<< " is too weak to repair" << std::endl;
	}
	else
	{
		this->_energy_points -= 1;
		std::cout << "ClapTrap " << this->_name << " attack " << target
		<< ", causing " << this->_attack_damage << " points of damage !"
		<< std::endl;
	}
	std::cout << _name << " has " << _energy_points << " energy_points remaining" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount
		<< " amounts of damage !" << std::endl;
	this->_hitpoints -= amount;
	std::cout << _name << " has " << _hitpoints << " _hitpoints and " << _energy_points << " energy_points remaining" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name
		<< " is too weak to repair" << std::endl;
	}
	else
	{
		this->_energy_points -= 1;
		std::cout << "ClapTrap " << this->_name
		<< " is taking a healing potion of "
		<< amount << " points !" << std::endl;
	}
	this->_hitpoints += amount;
	std::cout << _name << " has " << _hitpoints << " _hitpoints and " << _energy_points << " energy_points remaining" << std::endl;
}
