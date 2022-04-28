/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:58:30 by abrun             #+#    #+#             */
/*   Updated: 2022/04/28 17:05:48 by abrun            ###   ########.fr       */
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

ScavTrap::ScavTrap(const ScavTrap& trap):ClapTrap(trap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& trap)
{
	std::cout << "ScavTrap copy assignment constructor called" << std::endl;
	_name = trap._name;
	_hitpoints = trap._hitpoints;
	_energy_points = trap._energy_points;
	_attack_damage = trap._attack_damage;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (_hitpoints <= 0 || _energy_points <= 0)
	{
		std::cout << "ScavTrap " << _name
		<< " is too weak to attack" << std::endl;
	}
	else
	{
		_energy_points--;
		std::cout << "ScavTrap " << _name << " attack " << target
		<< ", causing " << _attack_damage << " points of damage !"
		<< std::endl;
	}
	std::cout << _name << " has " << _energy_points << " energy_points remaining" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (_hitpoints <= 0 || _energy_points <= 0)
	{
		std::cout << "ScavTrap " << _name
		<< " cannot use Gate" << std::endl;
	}
	else
	{
		_energy_points--;
		std::cout << "ScavTrap " << _name
		<< " has enterred in Gate keeper mode" << std::endl;
	}
	std::cout << _name << " has " << _energy_points << " energy_points remaining" << std::endl;
}
