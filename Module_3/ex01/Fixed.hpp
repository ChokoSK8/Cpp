/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:38:15 by abrun             #+#    #+#             */
/*   Updated: 2021/11/29 13:38:13 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{
	private:
		int			_raw;
		static const int	_bits;
	
	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		Fixed& operator=(const Fixed&);
		Fixed(const int n);
		Fixed(const float n);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& nbr);
#endif
