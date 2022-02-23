/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:57:31 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 15:02:21 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : virtual public AAnimal
{
	private:
		Brain*	_brain;

	public:
		Cat(void);
		Cat(std::string ideas);
		Cat(const Cat&);
		~Cat(void);
		Cat& operator=(const Cat&);
		virtual void	makeSound(void) const;
		void	displayBrain(void) const;
		void	setBrain(int, std::string);
};
#endif
