/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:28:16 by abrun             #+#    #+#             */
/*   Updated: 2022/05/06 11:11:47 by abrun            ###   ########.fr       */
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
	Intern	Leonard;

	Form*	spidy = Leonard.makeForm("blabla", "Spiders");
	Form*	batman = Leonard.makeForm("robotomy request", "Batman");

	delete spidy;
	delete batman;
	return (0);
}
