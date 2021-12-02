/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:27:35 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 14:18:54 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : virtual public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		void	use(ICharacter&);
		Cure*	clone(void) const;
};
#endif
