/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:28:16 by abrun             #+#    #+#             */
/*   Updated: 2021/12/05 19:14:34 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
/*	Bureaucrat	*Sheldon = new Bureaucrat("Sheldon", 7);
	Bureaucrat	*Howard = new Bureaucrat("Howard", 152);
	Bureaucrat	*Rajesh = new Bureaucrat("Rajesh", 100);
	Form		*SpaceX = new Form("SpaceX", 50);
	Form		*Alice = new Form("Alice", -2);
	RobotomyRequestForm		*MrX = new RobotomyRequestForm("Mrx");
	ShrubberyCreationForm	*Coco = new ShrubberyCreationForm("Coco");
	PresidentialPardonForm	*Penny = new PresidentialPardonForm("Penny");*/
	Intern	Leonard;
	Form*	spidy;
	Form*	batman;

/*	std::cout << *Sheldon << std::endl;
	std::cout << *Howard << std::endl;
	std::cout << *SpaceX << std::endl;
	std::cout << *MrX << std::endl;
	std::cout << "We increase Sheldon and decrease Howard"<< std::endl;
	Sheldon->increaseGrade();
	Howard->decreaseGrade();
	std::cout << *Sheldon << std::endl;
	std::cout << *Howard << std::endl;
	SpaceX->beSigned(*Howard);
	SpaceX->beSigned(*Sheldon);
	SpaceX->beSigned(*Sheldon);
	Alice->beSigned(*Rajesh);
	MrX->beSigned(*Rajesh);
	MrX->execute(*Sheldon);
	MrX->beSigned(*Sheldon);
	MrX->execute(*Sheldon);
	Coco->beSigned(*Sheldon);
	Coco->execute(*Sheldon);
	Penny->beSigned(*Sheldon);
	std::cout << *Sheldon << std::endl;
	Penny->execute(*Sheldon);
	std::cout << "We increase Sheldon" << std::endl;
	Sheldon->increaseGrade();
	std::cout << *Sheldon << std::endl;
	Penny->execute(*Sheldon);*/
	spidy = Leonard.makeForm("blabla", "Spiders");
	batman = Leonard.makeForm("robotomy request", "Batman");
/*	delete Sheldon;
	delete Howard;
	delete SpaceX;
	delete Alice;
	delete MrX;
	delete Rajesh;
	delete Coco;
	delete Penny;*/
	delete spidy;
	delete batman;
	return (0);
}
