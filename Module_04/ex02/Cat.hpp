/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:57:31 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 14:55:51 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : virtual public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat(void);
		Cat(std::string ideas);
		Cat& operator=(const Cat&);
		~Cat(void);
		virtual void	makeSound(void) const;
		void	display_brain(void) const;
};
#endif
