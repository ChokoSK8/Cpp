/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:40:47 by abrun             #+#    #+#             */
/*   Updated: 2022/02/01 09:57:49 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	std::string str(av[1]);
	std::cout << "argument : " + str << std::endl;
	return (0);
}
