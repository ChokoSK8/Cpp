/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:31:57 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 15:04:13 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include "Zombie.h"

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		void		annonce(void);
		std::string	getName(void);
		void		setName(std::string name);
};
#endif
