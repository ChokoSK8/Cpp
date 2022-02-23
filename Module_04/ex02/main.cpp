/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:53:08 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 15:03:15 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main()
{
	const Dog*	dog = new Dog();
	const Cat*	cat = new Cat();
	Cat		cat_2;
	Cat		cat_3;
	const AAnimal**	array;
	int		c = -1;
//	const AAnimal	tiger = new AAnimal();

	array = new const AAnimal*[4];
	while (++c < 2)
		array[c] = new Cat();
	c--;
	while (++c < 4)
		array[c] = new Dog();
	cat_3 = cat_2;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	dog->makeSound();
	dog->displayBrain();
	cat->makeSound();
	cat->displayBrain();
	std::cout << cat_2.getType() << std::endl;
	std::cout << cat_3.getType() << std::endl;
	cat_2.displayBrain();
	cat_3.displayBrain();
	delete dog;
	delete cat;

	std::cout << array[1]->getType() << std::endl;
	array[1]->makeSound();
	std::cout << array[2]->getType() << std::endl;
	c = -1;
	while (++c < 4)
		delete array[c];
	delete [] array;
	return (0);
}
