/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:52:03 by abrun             #+#    #+#             */
/*   Updated: 2022/02/22 11:37:11 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal&);
		virtual ~Animal(void);
		Animal	operator=(const Animal&);
		virtual void	makeSound(void) const;
		std::string	getType(void) const;
		void		setType(std::string type);
};
std::ostream& operator<<(std::ostream& os, const Animal&);
#endif
