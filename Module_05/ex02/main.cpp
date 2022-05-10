/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:28:16 by abrun             #+#    #+#             */
/*   Updated: 2022/05/10 12:09:37 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	std::cout << "   --------------Shrubbery tests--------------\n" << std::endl;

	Bureaucrat	*Sheldon = new Bureaucrat("Sheldon", 3);
	Bureaucrat	*Howe = new Bureaucrat("Howe", -45);
	Bureaucrat	*Rajesh = new Bureaucrat("Rajesh", 150);
	ShrubberyCreationForm	*Penny = new ShrubberyCreationForm("Penny");

	std::cout << *Sheldon << std::endl;
	std::cout << *Howe << std::endl;
	std::cout << *Rajesh << std::endl;
	std::cout << *Penny << std::endl;
	Penny->execute(*Rajesh);
	Rajesh->executeForm(*Penny);
	Rajesh->signForm(*Penny);
	Sheldon->signForm(*Penny);
	Howe->signForm(*Penny);
	std::cout << *Penny << std::endl;
	Penny->execute(*Sheldon);
	Penny->execute(*Howe);
	Penny->execute(*Rajesh);
	Rajesh->executeForm(*Penny);
	Sheldon->executeForm(*Penny);
	Howe->executeForm(*Penny);
	delete Penny;

	std::cout << "\n\n   --------------Robotomy tests--------------\n" << std::endl;

	RobotomyRequestForm	*Bernadette = new RobotomyRequestForm("Bernadette");

	std::cout << *Sheldon << std::endl;
	std::cout << *Howe << std::endl;
	std::cout << *Rajesh << std::endl;
	std::cout << *Bernadette << std::endl;
	Bernadette->execute(*Rajesh);
	Rajesh->executeForm(*Bernadette);
	Rajesh->signForm(*Bernadette);
	Sheldon->signForm(*Bernadette);
	Howe->signForm(*Bernadette);
	std::cout << *Bernadette << std::endl;
	Bernadette->execute(*Sheldon);
	Bernadette->execute(*Howe);
	Bernadette->execute(*Rajesh);
	Rajesh->executeForm(*Bernadette);
	Sheldon->executeForm(*Bernadette);
	Howe->executeForm(*Bernadette);
	delete Bernadette;

	std::cout << "\n\n   --------------Presidential tests--------------\n" << std::endl;

	PresidentialPardonForm	*Amy = new PresidentialPardonForm("Amy");

	std::cout << *Sheldon << std::endl;
	std::cout << *Howe << std::endl;
	std::cout << *Rajesh << std::endl;
	std::cout << *Amy << std::endl;
	Amy->execute(*Rajesh);
	Rajesh->executeForm(*Amy);
	Rajesh->signForm(*Amy);
	Howe->signForm(*Amy);
	Sheldon->signForm(*Amy);
	std::cout << *Amy << std::endl;
	Amy->execute(*Howe);
	Amy->execute(*Rajesh);
	Amy->execute(*Sheldon);
	Rajesh->executeForm(*Amy);
	Sheldon->executeForm(*Amy);
	Howe->executeForm(*Amy);
	delete Amy;
	delete Sheldon;
	delete Rajesh;
	delete Howe;
	return (0);
}
