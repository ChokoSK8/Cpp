/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:28:16 by abrun             #+#    #+#             */
/*   Updated: 2022/04/20 17:38:20 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	std::cout << "   --------------Shrubbery tests--------------" << std::endl;

	Bureaucrat	*Sheldon = new Bureaucrat("Sheldon", 3);
	Bureaucrat	*Howe = new Bureaucrat("Howe", -45);
	Bureaucrat	*Rajesh = new Bureaucrat("Rajesh", 120);
	ShrubberyCreationForm	*Penny = new ShrubberyCreationForm("Penny");

	std::cout << *Sheldon << std::endl;
	std::cout << *Howe << std::endl;
	std::cout << *Rajesh << std::endl;
	std::cout << *Penny << std::endl;
	Sheldon->signForm(*Penny);
	Howe->signForm(*Penny);
	Rajesh->signForm(*Penny);
	Howe->signForm(*Penny);
	Penny->execute(*Sheldon);
	Penny->execute(*Howe);
	Penny->execute(*Rajesh);
	Rajesh->executeForm(*Penny);
	Sheldon->executeForm(*Penny);
	Howe->executeForm(*Penny);
	delete Penny;

	std::cout << "   --------------Robotomy tests--------------" << std::endl;

	RobotomyRequestForm	*Bernadette = new RobotomyRequestForm("Bernadette");

	std::cout << *Sheldon << std::endl;
	std::cout << *Howe << std::endl;
	std::cout << *Rajesh << std::endl;
	std::cout << *Bernadette << std::endl;
	Sheldon->signForm(*Bernadette);
	Howe->signForm(*Bernadette);
	Rajesh->signForm(*Bernadette);
	Howe->signForm(*Bernadette);
	Bernadette->execute(*Sheldon);
	Bernadette->execute(*Howe);
	Bernadette->execute(*Rajesh);
	Rajesh->executeForm(*Bernadette);
	Sheldon->executeForm(*Bernadette);
	Howe->executeForm(*Bernadette);
	delete Bernadette;

	std::cout << "   --------------Robotomy tests--------------" << std::endl;

	PresidentialPardonForm	*Amy = new PresidentialPardonForm("Amy");

	std::cout << *Sheldon << std::endl;
	std::cout << *Howe << std::endl;
	std::cout << *Rajesh << std::endl;
	std::cout << *Amy << std::endl;
	Sheldon->signForm(*Amy);
	Howe->signForm(*Amy);
	Rajesh->signForm(*Amy);
	Howe->signForm(*Amy);
	Amy->execute(*Sheldon);
	Amy->execute(*Howe);
	Amy->execute(*Rajesh);
	Rajesh->executeForm(*Amy);
	Sheldon->executeForm(*Amy);
	Howe->executeForm(*Amy);
	delete Amy;
	delete Sheldon;
	delete Howe;
	return (0);
}
