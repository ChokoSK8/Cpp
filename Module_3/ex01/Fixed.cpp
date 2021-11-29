/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:47:54 by abrun             #+#    #+#             */
/*   Updated: 2021/11/29 13:38:33 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>
#include <cmath>
#include <iomanip>
	
const int	Fixed::_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(const Fixed &fixeed)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(fixeed.getRawBits());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixeed)
{
	std::cout << "Assignation member called" << std::endl;
	this->_raw = fixeed.getRawBits();
	return (*this);
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(n << _bits);
}

//	1 << _bits : on décale à gauche de _bits la representation par bits de 1
Fixed::Fixed(const float n)
{

	std::cout << "Float constructor called" << std::endl;
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

int		Fixed::toInt(void) const
{
	return (getRawBits() >> _bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& nbr)
{
	os << nbr.toFloat();
	return (os);
}
