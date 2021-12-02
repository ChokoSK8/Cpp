/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:32:58 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 12:32:33 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

int	main()
{
	Character*	naru = new Character("Uzumaki");
	Character*	mada = new Character("Madara");
	Ice*		ice_1 = new Ice();

	naru->unequip(3);
	naru->equip(ice_1);
	naru->use(3, *mada);
	naru->use(0, *mada);
	delete naru;
	delete mada;
	delete ice_1;
	return (0);
}
