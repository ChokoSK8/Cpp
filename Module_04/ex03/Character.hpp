/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:10:57 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 17:29:56 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character: virtual public ICharacter
{
	protected:
		std::string	_name;
		AMateria	_inventory[4];

	public:
		Character(std::string name);
		Character& operator=(const Character&);
};
#endif
