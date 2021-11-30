/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:28:55 by abrun             #+#    #+#             */
/*   Updated: 2021/11/26 16:07:10 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class	HumanB
{
	protected:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon *weap);
		void	attack(void);
};
#endif
