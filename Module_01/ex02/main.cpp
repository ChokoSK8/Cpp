/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:00:48 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 15:21:28 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str;
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << "address of str : " << &str << std::endl;
	std::cout << "address of stringPTR : " << stringPTR << std::endl;
	std::cout << "address of stringREF : " << &stringREF << std::endl;
	std::cout << "value of str : " << str << std::endl;
	std::cout << "value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "value of stringREF : " << stringREF << std::endl;
	return (0);
}
