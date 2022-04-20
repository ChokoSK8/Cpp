/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:58:39 by abrun             #+#    #+#             */
/*   Updated: 2022/04/20 11:10:33 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"
#include "Phone_book.hpp"
#include "Contact.hpp"

int	main()
{
	Phone_book	book;
	std::string	cmd;
	int				ret;

	std::cout << "Entrez une commande : ";
	std::cin >> cmd;
	if (std::cin.eof())
		return (1);
	ret = 0;
	while (cmd.compare("EXIT") != 0 && ret != -1)
	{
		if (ret == 0 && cmd.compare("ADD") == 0)
		{
			if (!book.add_contact())
				return (-1);
			ret = 1;
		}
		else if (ret == 0 && cmd.compare("SEARCH") == 0)
		{
			if (!book.search_contact())
				return (1);
			ret = 1;
		}
		else if (ret == 0)
		{
			if (std::cin.eof())
				return (1);
			std::cout << "La commande entrée n'est pas valide" << std::endl;
			std::cout << "Entrez une commande : ";
			std::cin >> cmd;
			ret = 0;
		}
		else
		{
			if (std::cin.eof())
				return (1);
			std::cout << "Entrez une commande : ";
			std::cin >> cmd;
			ret = 0;
		}
	}
	return (0);
}
