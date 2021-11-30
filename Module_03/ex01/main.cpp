/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:33:47 by abrun             #+#    #+#             */
/*   Updated: 2021/11/30 11:25:23 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int	main()
{
	ClapTrap	hero("Tatsumi");
	ScavTrap	venger("Akame");
	std::string	monster = "Esdeath";

	venger.attack(monster);
	hero.attack(monster);
	hero.takeDamage(8);
	venger.takeDamage(8);
	hero.beRepaired(20);
	venger.beRepaired(20);
	return (0);
}
