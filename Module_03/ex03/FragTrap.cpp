/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:15 by abrun             #+#    #+#             */
/*   Updated: 2022/05/03 15:48:59 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("frager", 100, 100, 30)
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap setName constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& trap):ClapTrap(trap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap	FragTrap::operator=(const FragTrap& trap)
{
	std::cout << "FragTrap copy assignment constructor called" << std::endl;
	_name = trap._name;
	_hitpoints = trap._hitpoints;
	_energy_points = trap._energy_points;
	_attack_damage = trap._attack_damage;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	if (_energy_points <= 0 || _hitpoints <= 0)
	{
		std::cout << "FragTrap " << _name
		<< " cannot attack for now" << std::endl;
	}
	else
	{
		_energy_points--;
		std::cout << "FragTrap " << _name << " attack " << target
		<< ", causing " << _attack_damage << " points of damage !"
		<< std::endl;
	}
	std::cout << _name << " has " << _energy_points << " energy_points remaining" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (_energy_points <= 0 || _hitpoints <= 0)
	{
		std::cout << "FragTrap " << _name
		<< " cannot ask for a high five" << std::endl;
	}
	else
	{
		_energy_points--;
		std::cout << "FragTrap " << _name
		<< ": 'Hey, high five me kindly ok ?'" << std::endl;
	}
	std::cout << _name << " has " << _energy_points << " energy_points remaining" << std::endl;
}
