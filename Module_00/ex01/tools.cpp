/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:53:32 by abrun             #+#    #+#             */
/*   Updated: 2021/11/25 15:13:23 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"

void	print_string(std::string str)
{
	if (str.size() <= 10)
	{
		std::cout << std::setw(11);
		std::cout << str + "|";
	}
	else
	{
		std::cout << str.substr(0, 9);
		std::cout << ".|";
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
		std::cout << str.substr(0, 9);
		std::cout << "." << std::endl;
	}
}

void	print_contact(Contact contact)
{
	std::cout << "First name : " + contact.getFirstName() << std::endl;
	std::cout << "Last name : " + contact.getLastName() << std::endl;
	std::cout << "Nickname : " + contact.getNickname() << std::endl;
	std::cout << "Phone number : " + contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " + contact.getDarkestSecret() << std::endl;
}
