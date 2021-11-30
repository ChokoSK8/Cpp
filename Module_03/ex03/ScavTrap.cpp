/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:58:30 by abrun             #+#    #+#             */
/*   Updated: 2021/11/30 13:38:42 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitpoints = 100;
	ClapTrap::_energy_points = 50;
	this->_attack_damage = 20;
} 

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitpoints > 0)
	{
		std::cout << "ScavTrap " << _name << " has enterred in Gate keeper mode"
			<< std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " is dead" << std::endl;
	}
}
