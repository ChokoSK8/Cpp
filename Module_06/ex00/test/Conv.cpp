/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:21:58 by abrun             #+#    #+#             */
/*   Updated: 2022/02/04 12:07:34 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

Conv::Conv(std::string str)
{
	std::cout << "Conv setStr constructor called" << std::endl;
	this->_type = getTypeof(str);
	fillTypes(str);
}

Conv::~Conv(void)
{
	std::cout << "Conv default destructor called" << std::endl;
}

std::string	Conv::getFloat(void) const
{
	return (this->_float);
}

std::string	Conv::getInt(void) const
{
	return (this->_int);
}

std::string	Conv::getChar(void) const
{
	return (this->_char);
}

std::string	Conv::getDouble(void) const
{
	return (this->_double);
}

int		Conv::getTypeof(std::string str)
{
	std::size_t	strlen;
	std::size_t	found;

	strlen = str.length();
	found = str.find_first_not_of("0123456789");
	if (found == std::string::npos)
		return (1);
	if (found == strlen - 1 || str[found] != '.')
		return (0);
	found = str.find_first_not_of("0123456789", found + 1);
	if (found == std::string::npos)
		return (2);
	else if (found == strlen - 1 && str[found] == 'f')
		return (3);
	return (0);
}

void	Conv::fillTypes(std::string str)
{
	toFloat(str);
	toInt(str);
	toDouble(str);
	toChar(str);
}

void	Conv::toFloat(std::string str)
{
	if (this->_type == 1)
		this->_float = str + ".0f";
	else if (this->_type == 2)
		this->_float = str + "f";
	else if (this->_type == 0)
		this->_float = "impossible";
	else
		this->_float = str;
}

void	Conv::toChar(std::string str)
{
	if (str.length() == 1)
		this->_char = str;
	else
		this->_char = "'*'";
}

void	Conv::toInt(std::string str)
{
	std::size_t	pos;
	std::size_t	sublen;
	bool		convertible;

	if (this->_type == 1)
		this->_int = str;
	else if (this->_type == 2 || this->_type == 3)
	{
		pos = str.find('.');
		sublen = (str.substr(pos)).length();
		this->_int = str.substr(0, str.length() - sublen);
	}
	else
		this->_int = "impossible";
}

void	Conv::toDouble(std::string str)
{
	if (this->_type == 1)
		this->_double = str + ".0";
	else if (this->_type == 3)
		this->_double = str.substr(0, str.length() - 1);
	else if (this->_type == 0)
		this->_double = "impossible";
	else
		this->_double = str;
}

std::ostream& operator<<(std::ostream& os, const Conv& convi)
{
	os << "char : " << convi.getChar() << std::endl;
	os << "int : " << convi.getInt() << std::endl;
	os << "double : " << convi.getDouble() << std::endl;
	os << "float : " << convi.getFloat();
	return (os);
}
