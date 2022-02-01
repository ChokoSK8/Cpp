/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:21:58 by abrun             #+#    #+#             */
/*   Updated: 2022/02/01 11:43:22 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

Conv::Conv(void)
{
	std::cout << "Conv default constructor called" << std::endl;
}

Conv::Conv(std::string str)
{
	std::cout << "Conv setStr constructor called" << std::endl;
	this->_float = toFloat(str);
	this->_int = toInt(str);
	this->_double = toDouble(str);
	this->_char = toChar(str);
}

float	Conv::ToInt(std::string str)
{

}
