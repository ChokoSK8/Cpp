/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:51:38 by abrun             #+#    #+#             */
/*   Updated: 2021/11/26 14:55:03 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*horde;
	int		c;

	horde = zombieHorde(5, "Zombax");
	c = 0;
	while (c < 5)
	{
		horde[c].annonce();
		c++;
	}
	delete [] horde;
	return (0);
}