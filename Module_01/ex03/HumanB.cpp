/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:36:17 by abrun             #+#    #+#             */
/*   Updated: 2022/04/22 19:05:50 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->armed = 0;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (this->armed)
		std::cout << this->name + " attacks with his " << this->weapon->getType()
			<< std::endl;
	else
		std::cout << this->name + " isn't armed" << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	armed = 1;
	this->weapon = &w;
}
