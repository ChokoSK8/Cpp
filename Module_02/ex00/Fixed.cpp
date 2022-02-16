/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:47:54 by abrun             #+#    #+#             */
/*   Updated: 2022/02/16 14:40:44 by abrun            ###   ########.fr       */
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
	std::cout << "Copy assignment member called" << std::endl;
	setRawBits(fixeed.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member fonction called" << std::endl;
	return (this->_fix);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fix = raw;
}
