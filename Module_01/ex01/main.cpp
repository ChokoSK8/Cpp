/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:51:38 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 15:11:51 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*horde;
	int		c;
	int		n_zombie;

	n_zombie = 5;
	horde = zombieHorde(n_zombie, "Zombax");
	c = 0;
	while (c < n_zombie)
	{
		horde[c].annonce();
		c++;
	}
	delete [] horde;
	return (0);
}
