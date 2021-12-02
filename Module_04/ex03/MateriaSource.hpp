/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:37:28 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 14:06:50 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria*	_list[4];
		int			_available[4];

	public:
		MateriaSource(void);
		~MateriaSource(void);
		void	learnMateria(AMateria*);
		AMateria*	createMateria(std::string const& type);
};
#endif
