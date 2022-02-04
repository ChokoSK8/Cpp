/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:21:27 by abrun             #+#    #+#             */
/*   Updated: 2022/02/04 13:27:34 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP
# include <string>
# include <iostream>
# include <limits>

struct	scal


class	Conv
{
	private:
			std::string	_float;
			std::string	_int;
			std::string	_char;
			std::string	_double;
			float	_typeFloat;
			char	_typeChar;
			double	_typeDouble;
			int		_type;

	public:
			Conv(std::string);
			~Conv(void);
			std::string	getFloat(void) const;
			std::string	getInt(void) const;
			std::string	getChar(void) const;
			std::string	getDouble(void) const;
			int		getTypeof(std::string);
			void	fillTypes(std::string);
			void	toFloat(std::string);
			void	toInt(std::string);
			void	toChar(std::string);
			void	toDouble(std::string);
			void	displayConv(void);
};

std::ostream& operator<<(std::ostream& os, const Conv& convi);
#endif
