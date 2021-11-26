/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:31:57 by abrun             #+#    #+#             */
/*   Updated: 2021/11/26 14:48:22 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	protected:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		void		annonce(void);
		std::string	getName(void);
		void		setName(std::string name);
};

Zombie	*zombieHorde(int n, std::string name);

#endif
