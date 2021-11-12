/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:58:39 by abrun             #+#    #+#             */
/*   Updated: 2021/11/12 19:55:21 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.h"

int	main()
{
	Phone_book	book;
	std::string	cmd;
	int				ret;

	book.init_n_contact();
	std::cout << "Entrez une commande : ";
	std::cin >> cmd;
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
		else
		{
			std::cout << "Entrez une commande : ";
			std::cin >> cmd;
			ret = 0;
		}
	}
	return (0);
}
