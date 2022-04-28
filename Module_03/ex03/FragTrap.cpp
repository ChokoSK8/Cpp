/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:15 by abrun             #+#    #+#             */
/*   Updated: 2022/04/28 13:06:31 by abrun            ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap& trap):ClapTrap(trap.getName())
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->setHitpoints(trap.getHitpoints());
	this->setEnergyPoints(trap.getEnergyPoints());
	this->setAttackDamage(trap.getAttackDamage());
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap	FragTrap::operator=(const FragTrap& trap)
{
	std::cout << "FragTrap copy assignment constructor called" << std::endl;
	this->setName(trap.getName());
	this->setHitpoints(trap.getHitpoints());
	this->setEnergyPoints(trap.getEnergyPoints());
	this->setAttackDamage(trap.getAttackDamage());
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	if (getEnergyPoints() <= 0 || getHitpoints() <= 0)
	{
		std::cout << "FragTrap " << getName()
		<< " cannot attack for now" << std::endl;
	}
	else
	{
		decreaseEnergyPoints();
		std::cout << "FragTrap " << getName() << " attack " << target
		<< ", causing " << getAttackDamage() << " points of damage !"
		<< std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	if (this->getEnergyPoints() <= 0 || this->getHitpoints() <= 0)
	{
		std::cout << "FragTrap " << this->getName()
		<< " cannot ask for a high five" << std::endl;
	}
	else
	{
		this->decreaseEnergyPoints();
		std::cout << "FragTrap " << this->getName()
		<< ": 'Hey, high five me kindly ok ?'" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const FragTrap& trap)
{
	os << "FragTrap :\n\t_name : " << trap.getName() << "\n\t_hitpoins : " << trap.getHitpoints() << "\n\t_energy_points : " << trap.getEnergyPoints() << "\n\t_attack_damage : " << trap.getAttackDamage();
	return (os);
}
