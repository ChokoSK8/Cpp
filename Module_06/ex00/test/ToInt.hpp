/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ToInt.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:15:26 by abrun             #+#    #+#             */
/*   Updated: 2022/02/04 12:02:26 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOINT_HPP
# define TOINT_HPP
# include <string>
# include <iostream>
# include <limits>

class	ToInt
{
		private:
			std::string	_str;
			int			_value;

		public:
			ToInt(void);
			template <class T>
			ToInt(int, std::string, const T&);
			~ToInt(void);
			std::string	getStr(void) const;
			template <class T>
			void		fillToInt(std::string, int, const T&);
			bool		isConvertible(std::string, int);
};
#endif
