/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:26:11 by abrun             #+#    #+#             */
/*   Updated: 2022/02/21 17:43:35 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"),		 
		FragTrap(name + "_clap_name"),
		ScavTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	_name = name;
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
	ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap):
		ClapTrap(trap.getName()),
		FragTrap(trap.getName()),
		ScavTrap(trap.getName())
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	_name = trap.getName();
	setHitpoints(trap.getHitpoints());
	setEnergyPoints(trap.getEnergyPoints());
	setAttackDamage(trap.getAttackDamage());
	ClapTrap::_name = trap.getName() + "_clap_name";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap	DiamondTrap::operator=(const DiamondTrap& trap)
{
	std::cout << "DiamondTrap copy assignment constructor called" << std::endl;
	_name = trap.getName();
	setHitpoints(trap.getHitpoints());
	setEnergyPoints(trap.getEnergyPoints());
	setAttackDamage(trap.getAttackDamage());
	ClapTrap::_name = trap.getName() + "_clap_name";
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

std::ostream& operator<<(std::ostream& os, const DiamondTrap& trap)
{
	os << "DiamondTrap :\n\t_name : " << trap.getName() << "\n\t_hitpoins : " << trap.getHitpoints() << "\n\t_energy_points : " << trap.getEnergyPoints() << "\n\t_attack_damage : " << trap.getAttackDamage();
	return (os);
}
