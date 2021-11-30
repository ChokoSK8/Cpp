/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:38:15 by abrun             #+#    #+#             */
/*   Updated: 2021/11/30 10:02:42 by abrun            ###   ########.fr       */
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
		Fixed& operator+(const Fixed&);
		Fixed& operator-(const Fixed&);
		Fixed& operator*(const Fixed&);
		Fixed& operator/(const Fixed&);
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed(const int n);
		Fixed(const float n);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed& min(Fixed&);
		static Fixed& max(Fixed&);
};

int	operator>(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator>=(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator<(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator<=(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator==(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator!=(const Fixed &fixe_a, const Fixed &fixe_b);
std::ostream& operator<<(std::ostream& os, const Fixed& nbr);
#endif
