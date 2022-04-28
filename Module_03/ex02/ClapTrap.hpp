/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:10:41 by abrun             #+#    #+#             */
/*   Updated: 2022/04/28 17:11:21 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		unsigned int		_hitpoints;
		unsigned int		_energy_points;
		unsigned int		_attack_damage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(std::string, unsigned int, unsigned int, unsigned int);
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap&);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
#endif
