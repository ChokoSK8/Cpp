/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:28:55 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 16:11:27 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		weapon;
		std::string	name;
		int		armed;

	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon weap);
		void	attack(void);
};
#endif
