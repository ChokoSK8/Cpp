/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:38:15 by abrun             #+#    #+#             */
/*   Updated: 2022/04/25 15:41:51 by abrun            ###   ########.fr       */
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
		Fixed&	min(Fixed&, Fixed&);
		Fixed&	max(Fixed&, Fixed&);
		static const Fixed& min(const Fixed& fixe_a, const Fixed& fixe_b){
			if (fixe_a.getRawBits() < fixe_b.getRawBits())
				return (fixe_a);
			return (fixe_b);
		};
		static const Fixed& max(const Fixed& fixe_a, const Fixed& fixe_b){
			if (fixe_a.getRawBits() > fixe_b.getRawBits())
				return (fixe_a);
			return (fixe_b);
		};
};

int	operator>(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator>=(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator<(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator<=(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator==(const Fixed &fixe_a, const Fixed &fixe_b);
int	operator!=(const Fixed &fixe_a, const Fixed &fixe_b);
std::ostream& operator<<(std::ostream& os, const Fixed& nbr);
#endif
