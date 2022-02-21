/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:06:30 by abrun             #+#    #+#             */
/*   Updated: 2022/02/21 17:34:02 by abrun            ###   ########.fr       */
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
		int		_hitpoints;
		int		_energy_points;
		int		_attack_damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap&);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	decreaseEnergyPoints(void);
		void	setName(std::string);
		void	setHitpoints(int);
		void	setEnergyPoints(int);
		void	setAttackDamage(int);
		std::string	getName(void) const;
		int		getHitpoints(void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;
};
std::ostream& operator<<(std::ostream& os, const ClapTrap&);
#endif
