/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:00:48 by abrun             #+#    #+#             */
/*   Updated: 2021/11/26 15:15:03 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	*str_ptr;
	std::string	str;
	std::string	&str_ref = str;

	str = "HI THIS IS BRAIN";
	str_ptr = &str;
	std::cout << "adresse of str : " << &str << std::endl;
	std::cout << "adresse of str_ptr : " << str_ptr << std::endl;
	std::cout << "adresse of str_ref : " << &str_ref << std::endl;
	return (0);
}
