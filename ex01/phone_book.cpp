/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:32:16 by abrun             #+#    #+#             */
/*   Updated: 2021/11/12 18:48:14 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.h"

void	Phone_book::init_n_contact(void)
{
	this->n_contact = 0;
}

void	Phone_book::search_contact(void)
{
	int	counter;

	if (this->n_contact == 0)
	{
		std::cout << "Il n'y aucun contact" << std::endl;
	}
	else
	{
		counter = 0;
		while (counter < this->n_contact)
		{
			print_string(this->contact[counter]->getFirstName());
			print_string(this->contact[counter]->getLastName());
			print_string(this->contact[counter]->getNickname());
			print_string(this->contact[counter]->getPhoneNumber());
			print_last_string(this->contact[counter]->getDarkestSecret());
			counter++;
		}
	}
}

void	Phone_book::add_contact(void)
{
	Contact	contact;

	contact.init_contact();
	if (this->n_contact < 8)
	{
		this->contact[n_contact] = &contact;
		n_contact++;
	}
	else
	{
		this->contact[0] = &contact;
		n_contact = 1;
	}
}
