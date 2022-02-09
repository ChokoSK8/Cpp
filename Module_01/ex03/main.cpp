/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:41:41 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 16:12:20 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	Weapon	club = Weapon("driver big head");
	Weapon	bankai = Weapon("baikai");
	HumanA	Chad = HumanA("Chad", club);
	HumanB	Abarai = HumanB("Abarai");

	Chad.attack();
	club.setType("putter");
	Abarai.attack();
	Abarai.setWeapon(bankai);
	Abarai.attack();
	Chad.attack();
	return (0);
}
