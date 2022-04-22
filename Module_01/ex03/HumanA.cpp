/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:31:27 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 16:10:37 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string namee, Weapon &weaponn) : weapon(weaponn)
{
	name = namee;
	//weapon = weaponn;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name + " attacks with his " << this->weapon.getType()
		<< std::endl;
}
