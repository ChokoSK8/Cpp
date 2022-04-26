/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:47:54 by abrun             #+#    #+#             */
/*   Updated: 2022/04/26 11:57:11 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <cmath>
#include <iomanip>
	
const int	Fixed::_bits = 8;

Fixed::Fixed(void)
{
	this->_raw = 0;
}

Fixed::Fixed(const Fixed &fixeed)
{
	setRawBits(fixeed.getRawBits());
}

Fixed::~Fixed(void)
{
}

Fixed&	Fixed::operator=(const Fixed &fixeed)
{
	this->_raw = fixeed.getRawBits();
	return (*this);
}

Fixed&	Fixed::operator/(const Fixed &fixe_a)
{
	this->_raw /= fixe_a.toFloat();
	return (*this);
}

Fixed&	Fixed::operator+(const Fixed &fixe_a)
{
	this->_raw += fixe_a.getRawBits();
	return (*this);
}

Fixed&	Fixed::operator*(const Fixed &fixe_a)
{
	this->_raw *= fixe_a.toFloat();
	return (*this);
}

Fixed&	Fixed::operator-(const Fixed &fixe_a)
{
	this->_raw -= fixe_a.getRawBits();
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed*	tmp = new Fixed(*this);
	this->_raw++;
	return (*tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed*	tmp = new Fixed(*this);
	this->_raw--;
	return (*tmp);
}

Fixed&	Fixed::min(Fixed &fixe_a, Fixed &fixe_b)
{
	if (fixe_a.getRawBits() < fixe_b.getRawBits())
		return (fixe_a);
	return (fixe_b);
}

Fixed&	Fixed::max(Fixed &fixe_a, Fixed &fixe_b)
{
	if (fixe_a.getRawBits() > fixe_b.getRawBits())
		return (fixe_a);
	return (fixe_b);
}

Fixed&	Fixed::operator++(void)
{
	++this->_raw;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	--this->_raw;
	return (*this);
}

Fixed::Fixed(const int n)
{
	this->_raw = n << _bits;
}

Fixed::Fixed(const float n)
{
	this->_raw = roundf(n * (1 << _bits));
}

int	Fixed::getRawBits(void) const
{
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_raw / (1 << _bits));
}

int	Fixed::toInt(void) const
{
	return (getRawBits() >> _bits);
}

int	operator>(const Fixed &fixe_a, const Fixed &fixe_b)
{
	if (fixe_a.toFloat() > fixe_b.toFloat())
		return (1);
	return (0);
}

int	operator>=(const Fixed &fixe_a, const Fixed &fixe_b)
{
	if (fixe_a.toFloat() >= fixe_b.toFloat())
		return (1);
	return (0);
}

int	operator<(const Fixed &fixe_a, const Fixed &fixe_b)
{
	if (fixe_a.toFloat() < fixe_b.toFloat())
		return (1);
	return (0);
}

int	operator<=(const Fixed &fixe_a, const Fixed &fixe_b)
{
	if (fixe_a.toFloat() <= fixe_b.toFloat())
		return (1);
	return (0);
}

int	operator==(const Fixed &fixe_a, const Fixed &fixe_b)
{
	if (fixe_a.toFloat() == fixe_b.toFloat())
		return (1);
	return (0);
}

int	operator!=(const Fixed &fixe_a, const Fixed &fixe_b)
{
	if (fixe_a.toFloat() != fixe_b.toFloat())
		return (1);
	return (0);
}

std::ostream& operator<<(std::ostream& os, const Fixed& nbr)
{
	os << nbr.toFloat();
	return (os);
}
