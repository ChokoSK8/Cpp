/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:01:30 by abrun             #+#    #+#             */
/*   Updated: 2022/04/28 13:10:55 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		~FragTrap(void);
		FragTrap	operator=(const FragTrap&);
		void	attack(const std::string&);
		void	highFivesGuys(void);
};
std::ostream& operator<<(std::ostream& os, const FragTrap&);
#endif
