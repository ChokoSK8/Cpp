/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:53:08 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 15:55:28 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main()
{
	const Dog*	dog = new Dog();
	const Cat*	cat = new Cat("dog");
	Cat		cat_2("cat");
	Cat		cat_3;
	const Animal**	array;
	int		c = -1;

	array = new const Animal*[4];
	while (++c < 2)
		array[c] = new Cat();
	c--;
	while (++c < 4)
		array[c] = new Dog();
	cat_3 = cat_2;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound();
	dog->display_brain();
	cat->makeSound();
	cat->display_brain();
	std::cout << cat_2.getType() << " " << std::endl;
	std::cout << cat_3.getType() << " " << std::endl;
	cat_2.display_brain();
	cat_3.display_brain();
	delete dog;
	delete cat;

	std::cout << array[1]->getType() << " " << std::endl;
	array[1]->makeSound();
	std::cout << array[2]->getType() << " " << std::endl;
	c = -1;
	while (++c < 4)
		delete array[c];
	delete [] array;
	return (0);
}
