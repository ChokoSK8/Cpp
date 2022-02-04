/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ToInt.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:23:08 by abrun             #+#    #+#             */
/*   Updated: 2022/02/04 12:06:32 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ToInt.hpp"

ToInt::ToInt(void)
{
	std::cout << "ToInt default constructor called" << std::endl;
}

ToInt::ToInt(std::string str, int type, const T& num)
{
	std::cout << "ToInt setParameters constructor called" << std::endl;
	fillToInt(type, str, num);
}

ToInt::~ToInt(void)
{
	std::cout << "ToInt destructor called" << std::endl;
}

void	ToInt::fillToInt(std::string str, int type, const T& num)
{
	std::size_t	pos;
	std::size_t	sublen;
	bool		convertible;

	if (isConvertible(type, num, str))
	{
		if (type == 1)
			this->_str = str;
		else if (type == 2 || type == 3)
		{
			pos = str.find('.');
			sublen = (str.substr(pos)).length();
			this->_str = str.substr(0, str.length() - sublen);
		}
	}
	else
		this->_str = "impossible";
}

bool	ToInt::isConvertible(std::string str, int type) const
{
	std::string	max;
	std::string	min;
	std::string	sub;

	if (type == 0 || (type == 4 && str[0] > '9' && str[0] < '0'))
		return (false);
	max = std::tostring(INT_MAX);
	mix = std::tostring(INT_MIN);
	sub = str.substr('.');
	if (sub[0] == '-' && sub.substr(1) > INT_MIN)
		return (false);
	else if ((sub[0] == '+' && sub.substr(1) > INT_MAX)
		return (false);
	if (sub > INT_MAX)
		return (false);
	return (true);
}
