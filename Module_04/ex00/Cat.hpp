/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:57:31 by abrun             #+#    #+#             */
/*   Updated: 2022/02/22 11:45:59 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class	Cat : virtual public Animal
{
	public:
		Cat(void);
		Cat(const Cat&);
		~Cat(void);
		Cat	operator=(const Cat&);
		virtual void	makeSound(void) const;
};
#endif
