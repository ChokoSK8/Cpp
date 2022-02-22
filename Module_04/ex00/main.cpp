/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:53:08 by abrun             #+#    #+#             */
/*   Updated: 2022/02/22 12:03:28 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int	main()
{
	const Animal* meta = new Animal();
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();
	const WrongCat* wrongCat = new WrongCat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	wrongCat->makeSound();
	delete meta;
	delete dog;
	delete cat;
	delete wrongCat;
	return (0);
}
