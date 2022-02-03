/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:40:47 by abrun             #+#    #+#             */
/*   Updated: 2022/02/03 11:49:25 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Conv.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	std::string str(av[1]);
	std::cout << "argument : " + str << std::endl;
	Conv	arg(str);
	std::cout << arg << std::endl;
	return (0);
}
