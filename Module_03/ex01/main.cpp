/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:33:47 by abrun             #+#    #+#             */
/*   Updated: 2022/02/21 10:42:49 by abrun            ###   ########.fr       */
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

	std::cout << hero << std::endl;
	std::cout << venger << std::endl;
	venger.attack(monster);
	hero.attack(monster);
	hero.takeDamage(8);
	venger.takeDamage(8);
	std::cout << hero << std::endl;
	std::cout << venger << std::endl;
	hero.beRepaired(20);
	venger.beRepaired(20);
	venger.guardGate();
	std::cout << hero << std::endl;
	std::cout << venger << std::endl;
	return (0);
}
