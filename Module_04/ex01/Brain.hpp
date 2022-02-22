/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:36:08 by abrun             #+#    #+#             */
/*   Updated: 2022/02/22 16:23:25 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Animal.hpp"
# include <string>
# include <iostream>
# include <sstream>

class	Brain : virtual public Animal
{
	protected:
		std::string _ideas[100];

	public:
		Brain(void);
		Brain(std::string ideas);
		Brain(const Brain&);
		~Brain(void);
		Brain	operator=(const Brain&);

		void	displayIdeas(void) const;
		std::string	getIdeas(int) const;
};
#endif
