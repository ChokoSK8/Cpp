/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:17:09 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 12:58:25 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <string>

class	ICharacter;

class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const& type);

		std::string const& getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target);
};
#endif
