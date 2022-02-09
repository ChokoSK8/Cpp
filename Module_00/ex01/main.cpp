/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:58:39 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 15:51:45 by abrun            ###   ########.fr       */
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
	while (cmd.compare("EXIT") != 0)
	{
		if (ret == 0 && cmd.compare("ADD") == 0)
		{
			book.add_contact();
			ret = 1;
		}
		else if (ret == 0 && cmd.compare("SEARCH") == 0)
		{
			book.search_contact();
			ret = 1;
		}
		else if (ret == 0)
		{
			std::cout << "La commande entrée n'est pas valide" << std::endl;
			std::cout << "Entrez une commande : ";
			if (std::cin.eof())
				return (1);
			std::cin >> cmd;
			ret = 0;
		}
		else
		{
			std::cout << "Entrez une commande : ";
			std::cin >> cmd;
			if (std::cin.eof())
				return (1);
			ret = 0;
		}
	}
	return (0);
}
