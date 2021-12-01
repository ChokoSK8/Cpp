/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:55:46 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 14:02:32 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : virtual public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog(void);
		Dog(std::string ideas);
		Dog& operator=(const Dog&);
		~Dog(void);
		virtual void	makeSound(void) const;
		void	display_brain(void) const;
};
#endif
