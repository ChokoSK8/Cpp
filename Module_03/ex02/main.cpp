/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:33:47 by abrun             #+#    #+#             */
/*   Updated: 2021/11/30 12:08:56 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int	main()
{
	ClapTrap	hero("Tatsumi");
	ScavTrap	scav("Akame");
	FragTrap	frag("Mine");
	std::string	monster = "Esdeath";

	frag.attack(monster);
	hero.attack(monster);
	frag.attack(monster);
	hero.takeDamage(8);
	frag.takeDamage(8);
	scav.takeDamage(8);
	hero.beRepaired(20);
	frag.beRepaired(20);
	scav.beRepaired(20);
	scav.guardGate();
	frag.highFivesGuys();
	return (0);
}
