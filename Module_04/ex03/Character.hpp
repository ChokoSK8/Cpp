/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:10:57 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 14:15:22 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character: virtual public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
		int			_available[4];

	public:
		Character(void);
		~Character(void);
		Character(std::string name);
		Character& operator=(const Character&);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif
