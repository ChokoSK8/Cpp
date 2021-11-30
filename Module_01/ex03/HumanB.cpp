/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:36:17 by abrun             #+#    #+#             */
/*   Updated: 2021/11/26 16:31:11 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name + " attacks with his " << this->weapon->getType()
			<< std::endl;
	else
		std::cout << this->name + " isn't armed" << std::endl;
}

void	HumanB::setWeapon(Weapon *w)
{
	this->weapon = w;
}
