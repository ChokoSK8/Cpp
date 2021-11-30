/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:46:13 by abrun             #+#    #+#             */
/*   Updated: 2021/11/25 15:08:30 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.h"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::init_contact()
{
	setFirstName();
	setLastName();
	setNickname();
	setPhoneNumber();
	setDarkestSecret();
}

void	Contact::setFirstName()
{
	std::string	str;

	std::cout << "Entrez first name : ";
	std::cin >> str;
	this->first_name = str;
}

void	Contact::setLastName()
{
	std::string	str;

	std::cout << "Entrez last name : ";
	std::cin >> str;
	this->last_name = str;
}

void	Contact::setNickname()
{
	std::string	str;

	std::cout << "Entrez nickname : ";
	std::cin >> str;
	this->nickname = str;
}

void	Contact::setPhoneNumber()
{
	std::string	str;

	std::cout << "Entrez phone number : ";
	std::cin >> str;
	this->phone_number = str;
}

void	Contact::setDarkestSecret()
{
	std::string	str;

	std::cout << "Entrez darkest secret : ";
	std::cin >> str;
	this->darkest_secret = str;
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
