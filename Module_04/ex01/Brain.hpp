/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:39:32 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 14:55:41 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class	Brain
{
	protected:
		std::string*	_ideas;

	public:
		Brain(void);
		Brain(std::string ideas);
		Brain& operator=(const Brain&);
		~Brain(void);
		void	display_ideas(void) const;
};
#endif
