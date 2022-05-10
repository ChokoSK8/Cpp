/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:28:16 by abrun             #+#    #+#             */
/*   Updated: 2022/05/10 11:51:55 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat	*Sheldon = new Bureaucrat("Sheldon", 3);
	Bureaucrat	*Howard = new Bureaucrat("Howard", 152);
	Bureaucrat	Rajesh = *Howard;

	std::cout << *Sheldon << std::endl;
	std::cout << *Howard << std::endl;
	std::cout << "We increase Sheldon and decrease Howard"<< std::endl;
	Sheldon->increaseGrade();
	Howard->decreaseGrade();
	std::cout << *Sheldon << std::endl;
	std::cout << *Howard << std::endl;
	std::cout << Rajesh << std::endl;
	Sheldon->increaseGrade();
	Sheldon->increaseGrade();
	Sheldon->increaseGrade();
	Howard->increaseGrade();
	Howard->increaseGrade();
	Howard->increaseGrade();
	Howard->increaseGrade();
	std::cout << *Sheldon << std::endl;
	std::cout << *Howard << std::endl;
	delete Sheldon;
	delete Howard;
	return (0);
}
