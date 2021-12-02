/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:20:08 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 12:00:59 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : virtual public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		void	use(const ICharacter& target);
		Ice*	clone(void) const;
};
#endif	
