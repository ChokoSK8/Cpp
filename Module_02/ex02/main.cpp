/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:09:45 by abrun             #+#    #+#             */
/*   Updated: 2022/04/26 12:01:26 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	Fixed		a;
	Fixed 		b(1234.432f);
	Fixed const	c(Fixed(5.0f));
	Fixed const	e(Fixed(12.0f));
	Fixed		d;

	std::cout << "a is " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "--a is " << --a << std::endl;
	std::cout << "a-- is " << a-- << std::endl;

	a = Fixed(100);
	b = Fixed(12);
	d = a;
	std::cout << "a is " << a << " and e is " << e << std::endl;
	std::cout << "a * e is " << a * e << std::endl;
	std::cout << "a is " << a << " and c is " << c << std::endl;
	std::cout << "a / c is " << a / c << std::endl;
	std::cout << "a is " << a << " and e is " << e << std::endl;
	std::cout << "a + e is " << a + e << std::endl;
	std::cout << "a is " << a << " and c is " << c << std::endl;
	std::cout << "a - c is " << a - c << std::endl;

	a = Fixed(100);
	b = Fixed(12);
	d = a;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "Is a greater than b ?" << std::endl;
	if (a > b)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "Is a lower than b ?" << std::endl;
	if (a < b)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "Is a greater or equal than b ?" << std::endl;
	if (a >= b)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "Is a lower or equal than d ?" << std::endl;
	if (a > d)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "Is a equal to b ?" << std::endl;
	if (a == b)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "Is a equal to d ?" << std::endl;
	if (a == d)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "Is a non-equal to d ?" << std::endl;
	if (a != d)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	std::cout << "Max between a and c is : " << Fixed::max(a, c) << std::endl;
	std::cout << "Min between a and c is : " << Fixed::min(a, c) << std::endl;

	return (0);
}
