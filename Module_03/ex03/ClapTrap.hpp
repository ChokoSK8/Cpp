/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:06:30 by abrun             #+#    #+#             */
/*   Updated: 2022/04/28 12:49:13 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>
# include <iostream>

class ClapTrap
{
	private:
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
