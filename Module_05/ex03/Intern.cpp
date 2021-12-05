/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:07:35 by abrun             #+#    #+#             */
/*   Updated: 2021/12/05 19:15:46 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
	_form[0] = "robotomy request";
	_form[1] = "shrubbery creation";
	_form[2] = "presidential pardon";
	_pf[0] = &RobotomyRequestForm::createForm;
	_pf[1] = &ShrubberyCreationForm::createForm;
	_pf[2] = &PresidentialPardonForm::createForm;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Form*	Intern::makeForm(std::string formo, std::string target)
{
	Form	*res;
	int		i;

	i = -1;
	try
	{
		while (++i < 2)
		{
			if (formo == _form[i])
			{
				std::cout << "Intern creates " << formo << std::endl;
				res = _pf[i](target);
				return (res);
			}
		}
		throw	Form::UnrecognizedForm();
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : "  << e.what() << std::endl;
		res = new Form(target, 0);
	}
	return (res);
}
