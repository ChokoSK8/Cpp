/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:33:47 by abrun             #+#    #+#             */
/*   Updated: 2022/04/28 12:26:36 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int	main()
{
	ClapTrap	hero("Tatsumi");
	std::string	monster = "Esdeath";

	std::cout << hero << std::endl;
	hero.attack(monster);
	std::cout << hero << std::endl;
	hero.takeDamage(8);
	std::cout << hero << std::endl;
	hero.takeDamage(8);
	std::cout << hero << std::endl;
	hero.attack(monster);
	std::cout << hero << std::endl;
	hero.beRepaired(20);
	std::cout << hero << std::endl;
	return (0);
}
