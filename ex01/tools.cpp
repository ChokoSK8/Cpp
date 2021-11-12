/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:53:32 by abrun             #+#    #+#             */
/*   Updated: 2021/11/12 18:50:03 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.h"

void	print_string(std::string str)
{
	if (str.size() <= 10)
	{
		std::cout << str + " | ";
	}
	else
	{
		std::cout << std::setprecision(9) << str;
		std::cout << ". | ";
	}
}

void	print_last_string(std::string str)
{
	if (str.size() <= 10)
	{
		std::cout << str << std::endl;
	}
	else
	{
		std::cout << std::setprecision(9) << str;
		std::cout << "." << std::endl;
	}
}
