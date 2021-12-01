/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:30:05 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 17:38:36 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string name)
{
	int	c = -1;

	std::cout << "Charactere setName constructor called" << std::endl;
	this->_name = name;
	while (++c < 4)
		this->_inventory[c] = 0;
}

Character& operator=(const Character& charactere)
{
	std::cout << "ICharactere copy constructor called" << std::endl;
	this->_name = charactere.getName();
	this->_inventory[0] = charatere->_inventory[0];
}
