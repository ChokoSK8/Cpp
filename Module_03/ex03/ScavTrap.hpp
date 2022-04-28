/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:55:54 by abrun             #+#    #+#             */
/*   Updated: 2022/04/28 13:10:46 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		~ScavTrap(void);
		ScavTrap& operator=(const ScavTrap&);
		void	attack(const std::string&);
		void	guardGate(void);
};
std::ostream& operator<<(std::ostream& os, const ScavTrap&);
#endif
