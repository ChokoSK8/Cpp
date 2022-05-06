/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:52:03 by abrun             #+#    #+#             */
/*   Updated: 2022/05/04 15:55:45 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class	AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal(void);
		AAnimal(std::string type);
		virtual ~AAnimal(void);
		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
		void		setType(std::string type);
};
#endif
