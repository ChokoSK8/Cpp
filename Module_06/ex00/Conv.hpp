/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:21:27 by abrun             #+#    #+#             */
/*   Updated: 2022/02/01 10:21:35 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP
# include <string>
# include <iostream>

class	Conv
{
	private:
			float	_float;
			int		_int;
			char	_char;
			double	_double;

	public:
			Conv(std::string);
			~Conv(void);
			float	toFloat(std::string);
			int		toInt(std::string);
			char	toChar(std::string);
			double	toDouble(std::string);
			void	displayConv(const Conv);
};
#endif
