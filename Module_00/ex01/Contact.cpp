/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:46:13 by abrun             #+#    #+#             */
/*   Updated: 2022/04/20 11:07:40 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"

Contact::Contact()
{
}

Contact::~Contact()
{
}

int	Contact::init_contact()
{
	if (!setFirstName() || !setLastName() || !setNickname()
		|| !setPhoneNumber() || !setDarkestSecret())
		return (0);
	return (1);
}

int	Contact::setFirstName()
{
	std::string	str;

	if (std::cin.eof())
		return (0);
	std::cout << "Entrez first name : ";
	std::cin >> str;
	this->first_name = str;
	return (1);
}

int	Contact::setLastName()
{
	std::string	str;

	if (std::cin.eof())
		return (0);
	std::cout << "Entrez last name : ";
	std::cin >> str;
	this->last_name = str;
	return (1);
}

int	Contact::setNickname()
{
	std::string	str;

	if (std::cin.eof())
		return (0);
	std::cout << "Entrez nickname : ";
	std::cin >> str;
	this->nickname = str;
	return (1);
}

int	Contact::setPhoneNumber()
{
	std::string	str;

	if (std::cin.eof())
		return (0);
	std::cout << "Entrez phone number : ";
	std::cin >> str;
	this->phone_number = str;
	return (1);
}

int	Contact::setDarkestSecret()
{
	std::string	str;

	if (std::cin.eof())
		return (0);
	std::cout << "Entrez darkest secret : ";
	std::cin >> str;
	this->darkest_secret = str;
	return (1);
}

std::string	Contact::getFirstName(void)
{
	return (this->first_name);
}

std::string	Contact::getLastName(void)
{
	return (this->last_name);
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->phone_number);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkest_secret);
}
