/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:28:39 by abrun             #+#    #+#             */
/*   Updated: 2021/11/26 16:01:53 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class	HumanA
{
	protected:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanA(std::string name, Weapon *weapon);
		~HumanA(void);
		void	attack(void);
};
#endif
