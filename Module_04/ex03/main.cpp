/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:32:58 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 17:38:38 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

int	main()
{
	const Character*	naru = new Character("Uzumaki");
	const Character*	mada = new Character("Madara");
	const Ice*	ice_1 = new Ice();

	hero->unequip(3);
	hero->equip(2, ice_1);
	hero->use(3, mada);
	hero->use(2, mada);
	delete naru;
	delete mada;
	delete ice_1;
	return (0);
}
