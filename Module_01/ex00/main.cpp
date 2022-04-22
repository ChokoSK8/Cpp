/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:51:38 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 14:59:40 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*z1;
	Zombie	*z2;

	z1 = newZombie("Charli");
	z2 = newZombie("Toshiro");
	z1->annonce();
	randomChump("Ikaku");
	z2->annonce();
	delete z1;
	delete z2;
	return (0);
}
