/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:47:54 by abrun             #+#    #+#             */
/*   Updated: 2021/11/28 20:53:43 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	int const	raw = 0;
	std::string	str;

	setRawBits(raw);
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

Fixed & Fixed::operator=(const Fixed &fixeed)
{
	std::cout << "Assignation member called" << std::endl;
	setRawBits(fixeed.getRawBits());
	return (*this);
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(n);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(n);
}

int	Fixed::getRawBits(void) const
{
	return (this->fix);
}

void	Fixed::setRawBits(int const raw)
{
	this->fix = raw;
}

float	Fixed::toFloat(void) const
{
	float	res;

	res = getRawBits();
	return (res);
}

float	Fixed::toInt(void) const
{
	int	res;

	res = roundf(getRawBits());
	return (res);
}
