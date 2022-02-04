/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:40:47 by abrun             #+#    #+#             */
/*   Updated: 2022/02/04 12:07:50 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Conv.hpp"
#include "ToInt.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	std::string str(av[1]);
	std::cout << "argument : " + str << std::endl;
	return (0);
}
