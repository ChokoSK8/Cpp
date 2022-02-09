/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:32:16 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 15:51:56 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"

Phone_book::Phone_book()
{
	init_n_contact();
	setIndex(0);
}

Phone_book::~Phone_book()
{
}

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
			std::cout << std::setw(11) << std::to_string(counter) + "|";
			print_string(this->contact[counter].getFirstName());
			print_string(this->contact[counter].getLastName());
			print_last_string(this->contact[counter].getNickname());
			counter++;
		}
		ask_for_index();
	}
}

void	Phone_book::add_contact()
{
	Contact	contact;

	contact.init_contact();
	if (this->n_contact < 8)
	{
		this->contact[n_contact] = contact;
		n_contact++;
	}
	else
	{
		this->contact[getIndex()] = contact;
		if (this->index == 7)
			 setIndex(0);
		else
			setIndex(getIndex() + 1);
	}
}

void	Phone_book::ask_for_index()
{
	int			index;
	std::string	str;

	index = 1;
	while (index)
	{
		std::cout << "Entrez l'index du contact que vous souhaitez afficher : ";
		if (std::cin.eof())
			exit (1);
		std::cin >> str;
		if (str.find_first_not_of("0123456789") == std::string::npos)
		{
			index = std::stoi(str, nullptr, 10);
			if (index >= 0 && index < n_contact)
			{
				print_contact(this->contact[index]);
				index = 0;
			}
			else
				std::cout << "L'index entré n'est pas attribué" << std::endl;
		}
		else
			std::cout << "Vous avez entre des caractères invalides" << std::endl;
	}
}

void	Phone_book::setIndex(int n)
{
	this->index = n;
}

int		Phone_book::getIndex()
{
	return (this->index);
}
