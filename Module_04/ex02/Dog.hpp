/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:55:46 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 15:01:54 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : virtual public AAnimal
{
	private:
		Brain*	_brain;

	public:
		Dog(void);
		Dog(std::string ideas);
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog(void);
		virtual void	makeSound(void) const;
		void	displayBrain(void) const;
		void	setBrain(int, std::string);
};
#endif
