/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:37:56 by abrun             #+#    #+#             */
/*   Updated: 2022/04/22 17:31:01 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	int			c;
	Zombie		*horde;
	std::string	z_name;

	c = 0;
	horde = new Zombie[n];
	while (c < n)
	{
		z_name = name;
		horde[c].setName(z_name);
		c++;
	}
	return (horde);
}
