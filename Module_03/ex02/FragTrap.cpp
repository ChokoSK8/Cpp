/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:15 by abrun             #+#    #+#             */
/*   Updated: 2022/02/21 11:32:28 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
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

void	FragTrap::highFivesGuys(void)
{
	if (this->getEnergyPoints() <= 0)
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
