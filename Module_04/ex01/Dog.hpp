/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:55:46 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 14:44:37 by abrun            ###   ########.fr       */
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
		Dog(const Dog&);
		~Dog(void);
		Dog&	operator=(const Dog&);
		virtual void	makeSound(void) const;
		void	displayBrain(void) const;
		void	setBrain(int n, std::string id);
};
#endif
