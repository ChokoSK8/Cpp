/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:36:29 by abrun             #+#    #+#             */
/*   Updated: 2021/12/05 18:05:03 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include <iostream>
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	_target = target;
	_exec = 137;
	_tree = "   *\n  (8)\n (888)\n   |\n  ===";
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) throw()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

int	ShrubberyCreationForm::checkExecGrade(int execGrade) const
{
	if (execGrade < _exec)
		return (1);
	return (0);
}

void	ShrubberyCreationForm::execAction(void) const
{
	std::string	fileName;

	fileName = _target + "_shrubbery";
	std::ofstream outfile(fileName);
	outfile << _tree << std::endl;
	outfile.close();
}

Form*	ShrubberyCreationForm::createForm(std::string target)
{
	ShrubberyCreationForm*	newForm = new ShrubberyCreationForm(target);
	return (newForm);
}
