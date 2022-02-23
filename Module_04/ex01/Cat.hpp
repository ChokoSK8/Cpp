/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:57:31 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 12:23:08 by abrun            ###   ########.fr       */
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
		Cat(const Cat&);
		virtual ~Cat(void);
		Cat&	operator=(const Cat&);
		virtual void	makeSound(void) const;
		void	displayBrain(void) const;
		void	setBrain(int, std::string);
};
#endif
