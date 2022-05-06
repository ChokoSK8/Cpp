/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:53:08 by abrun             #+#    #+#             */
/*   Updated: 2022/05/04 15:55:01 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main()
{
	std::cout << "// Test Animal array \\" << std::endl;

	const Animal**	array;
	int		c = -1;

	array = new const Animal*[4];

	while (++c < 2)
		array[c] = new Cat();
	c--;
	while (++c < 4)
		array[c] = new Dog();

	c = -1;
	while (++c < 4)
		delete array[c];
	delete [] array;


	std::cout << "// Test copy assignment \\" << std::endl;

	Dog	cat_1;
	Dog	cat_2;

	cat_1.setBrain(0, "AAAAAAHHHHHHHH");
	cat_2 = cat_1;
	cat_1.setBrain(2, "OOOOOUUUHHH");
	cat_1.displayBrain();
	cat_2.displayBrain();


	std::cout << "// Test copy \\" << std::endl;

	Dog	cat_3;

	cat_3.setBrain(0, "AAAAAAHHHHHHHH");
	Dog*	cat_4 = new Dog(cat_3);
	cat_3.setBrain(2, "OOOOOUUUHHH");
	cat_3.displayBrain();
	cat_4->displayBrain();
	delete cat_4;
	return (0);
}
