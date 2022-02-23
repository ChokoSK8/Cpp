/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:36:08 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 12:18:11 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>
# include <sstream>

class	Brain
{
	protected:
		std::string* _ideas;

	public:
		Brain(void);
		Brain(const Brain&);
		virtual ~Brain(void);
		Brain&	operator=(const Brain&);

		void	displayIdeas(void) const;
		std::string	getIdeas(int) const;
		void	setIdeas(int, std::string);
};
#endif
