/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:33:47 by abrun             #+#    #+#             */
/*   Updated: 2021/11/30 13:38:46 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int	main()
{
	ClapTrap	hero("Tatsumi");
	ScavTrap	scav("Akame");
	FragTrap	frag("Mine");
	DiamondTrap	diam("Bulat");
	std::string	monster = "Esdeath";

	frag.attack(monster);
	hero.attack(monster);
	scav.attack(monster);
	diam.attack(monster);
	hero.takeDamage(800);
	frag.takeDamage(8);
	scav.takeDamage(8);
	diam.takeDamage(8);
	hero.beRepaired(20);
	frag.beRepaired(20);
	scav.beRepaired(20);
	diam.beRepaired(20);
	scav.guardGate();
	frag.highFivesGuys();
	diam.guardGate();
	diam.highFivesGuys();
	diam.whoAmI();
	return (0);
}
