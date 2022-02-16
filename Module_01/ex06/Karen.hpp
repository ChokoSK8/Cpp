/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:37:48 by abrun             #+#    #+#             */
/*   Updated: 2022/02/16 13:50:06 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>

class	Karen
{
	protected:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		std::map<std::string, int> myMap;

	public:
		void	complain(std::string level);
		Karen();
		~Karen();
};
