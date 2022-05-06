/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:06:56 by abrun             #+#    #+#             */
/*   Updated: 2022/05/04 15:13:34 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <string>

class	WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal&);
		~WrongAnimal(void);
		WrongAnimal&	operator=(const WrongAnimal&);
		void	makeSound(void) const;
		std::string	getType(void) const;
		void		setType(std::string type);
};
#endif
