/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:41:56 by abrun             #+#    #+#             */
/*   Updated: 2022/02/16 12:13:48 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int	main(int ac, char **av)
{
	std::string	rep;
	std::string	line;
	std::size_t	found;
	std::size_t	s2_len;
	std::size_t	s1_len;
	std::string s1;
	std::string s2;
	std::string tmp;
	std::size_t	f_2;

	if (ac != 4)
	{
		std::cout << "Il n'y pas le bon nombre d'argument" << std::endl;
		return (1);
	}
	s1 = std::string(av[2]);
	s2 = std::string(av[3]);
	s2_len = s2.size();
	s1_len = s1.size();
	std::string infile = std::string(av[1]);
	std::ifstream file(infile);
	if (!file || !s1_len)
	{
		std::cout << "Il y a un problème avec l'un des arguments" << std::endl;
		if (file)
			file.close();
		return (2);
	}
	rep = infile + ".replace";
	std::ofstream replace(rep);
	while (std::getline(file, line))
	{
		found = line.find(s1);
		if (found == std::string::npos)
			replace << line;
		else
		{
			while (found != std::string::npos)
			{
				tmp = line.substr(0, found);
				replace << tmp + s2; 
				line = line.substr(found + s1_len);
				found = line.find(s1);
			}
			replace << line; 
		}
		replace << std::endl;
	}
	return (0);
}
