/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:53:15 by abrun             #+#    #+#             */
/*   Updated: 2021/11/30 13:38:17 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	ClapTrap::_hitpoints = 100;
	this->_energy_points = 100;
	ClapTrap::_attack_damage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitpoints < 0)
		std::cout << "FragTrap " << _name << " is dead" << std::endl;
	else
		std::cout << _name << " send you a high five request" << std::endl;
}
