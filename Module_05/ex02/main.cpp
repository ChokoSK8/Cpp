/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:28:16 by abrun             #+#    #+#             */
/*   Updated: 2021/12/04 17:33:21 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	*Sheldon = new Bureaucrat("Sheldon", 3);
	Bureaucrat	*Howard = new Bureaucrat("Howard", 152);
	Form		*SpaceX = new Form("SpaceX", 50);
	Form		*Alice = new Form("Alice", -2);

	std::cout << *Sheldon << std::endl;
	std::cout << *Howard << std::endl;
	std::cout << *SpaceX << std::endl;
	std::cout << "We increase Sheldon and decrease Howard"<< std::endl;
	Sheldon->increaseGrade();
	Howard->decreaseGrade();
	std::cout << *Sheldon << std::endl;
	std::cout << *Howard << std::endl;
	SpaceX->beSigned(*Howard);
	SpaceX->beSigned(*Sheldon);
	SpaceX->beSigned(*Sheldon);
	Alice->beSigned(*Howard);
	delete Sheldon;
	delete Howard;
	delete SpaceX;
	delete Alice;
	return (0);
}
