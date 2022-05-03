/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:26:11 by abrun             #+#    #+#             */
/*   Updated: 2022/05/03 16:00:31 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap setName constructor called" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap):ClapTrap(trap._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	_name = trap._name;
	_hitpoints = trap._hitpoints;
	_energy_points = trap._energy_points;
	_attack_damage = trap._attack_damage;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap	DiamondTrap::operator=(const DiamondTrap& trap)
{
	std::cout << "DiamondTrap copy assignment constructor called" << std::endl;
	_name = trap._name;
	_hitpoints = trap._hitpoints;
	_energy_points = trap._energy_points;
	_attack_damage = trap._attack_damage;
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is : " << _name << std::endl;
	std::cout << "My claptrap name is : " << ClapTrap::_name << std::endl;
}
