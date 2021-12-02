/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:20:08 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 13:04:10 by abrun            ###   ########.fr       */
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
		void	use(ICharacter& target);
		Ice*	clone(void) const;
};
#endif	
