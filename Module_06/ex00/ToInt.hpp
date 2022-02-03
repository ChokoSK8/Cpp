/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ToInt.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:15:26 by abrun             #+#    #+#             */
/*   Updated: 2022/02/03 14:54:02 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOINT_HPP
# define TOINT_HPP
# include <string>
# include <iostream>
# include <limits>

template <typename T>

class	ToInt
{
		private:
			std::string	_str;
			int			_value;

		public:
			ToInt(std::string, int, const T&);
			~ToInt(void);
			std::string	getStr(void) const;
			void		fillToInt(std::string, int, const T&);
			bool		isConvertible(std::string, int);
};
#endif
