/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:41:56 by abrun             #+#    #+#             */
/*   Updated: 2021/11/26 18:05:59 by abrun            ###   ########.fr       */
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

	if (ac != 4)
	{
		std::cout << "Il n'y pas le bon nombre d'argument" << std::cin;
		return (1);
	}
	std::string infile = std::string(av[1]);
	std::ifstream file(infile);
	if (!file)
	{
		std::cout << "Le fichier " + infile + " n'a pas pu s'ouvrir"
			<< std::endl;
		return (2);
	}
	std::string s1 = std::string(av[2]);
	std::string s2 = std::string(av[3]);
	rep = infile + ".replace";
	std::ofstream replace(rep);
	s2_len = s2.size();
	s1_len = s1.size();
	while (std::getline(file, line))
	{
		found = line.find(s1);
		if (found == std::string::npos)
			replace << line << std::endl;
		else
		{
			replace << line.substr(0, found) << s2 << line.substr(found + s1_len)
				<< std::endl;
		}
	}
	return (0);
}
