/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:28:16 by abrun             #+#    #+#             */
/*   Updated: 2022/03/07 13:04:56 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat	*Sheldon = new Bureaucrat("Sheldon", 3);
	Bureaucrat	*Howe = new Bureaucrat("Howe", -45);
	ShrubberyCreationForm	*Penny = new ShrubberyCreationForm("Penny");

	std::cout << *Sheldon << std::endl;
	std::cout << *Howe << std::endl;
	std::cout << *Penny << std::endl;
	Howe->signForm(*Penny);
	Sheldon->signForm(*Penny);
	Howe->signForm(*Penny);
	Penny->execute(*Sheldon);
	Penny->execute(*Howe);
	delete Sheldon;
	delete Penny;
	delete Howe;
	return (0);
}
