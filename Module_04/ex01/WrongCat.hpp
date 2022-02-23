/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:18:04 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 14:04:15 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class	WrongCat : virtual public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat&);
		virtual ~WrongCat(void);
		WrongCat&	operator=(const WrongCat&);
		virtual void	makeSound(void) const;
};
#endif
