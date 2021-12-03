/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:28:16 by abrun             #+#    #+#             */
/*   Updated: 2021/12/03 19:10:03 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	*Sheldon = new Bureaucrat("Sheldon", 3);
	Bureaucrat	*Howard = new Bureaucrat("Howard", 152);
	Form		*Formo = new Form("SpaceX", 50);
	Form		*Alice = new Form("Alice", -2);

	std::cout << *Sheldon << std::endl;
	std::cout << *Howard << std::endl;
	std::cout << *Formo << std::endl;
	std::cout << "We increase Sheldon and decrease Howard"<< std::endl;
	Sheldon->increaseGrade();
	Howard->decreaseGrade();
	std::cout << *Sheldon << std::endl;
	std::cout << *Howard << std::endl;
	Formo->beSigned(*Howard);
	Formo->beSigned(*Sheldon);
	Formo->beSigned(*Sheldon);
	Alice->beSigned(*Howard);
	delete Sheldon;
	delete Howard;
	delete Formo;
	delete Alice;
	return (0);
}
