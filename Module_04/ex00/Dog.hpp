/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:55:46 by abrun             #+#    #+#             */
/*   Updated: 2022/02/22 11:44:03 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class	Dog : virtual public Animal
{
	public:
		Dog(void);
		Dog(const Dog&);
		~Dog(void);
		Dog	operator=(const Dog&);
		virtual void	makeSound(void) const;
};
#endif
