/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:36:29 by abrun             #+#    #+#             */
/*   Updated: 2022/04/20 17:38:30 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include <iostream>
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void):Form("Creation", 145)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	setExec(137);
	_tree = "   *\n  (8)\n (888)\n   |\n  ===";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145)
{
	std::cout << "ShrubberyCreationForm setParam constructor called" << std::endl;
	setExec(137);
	setTarget(target);
	_tree = "   *\n  (8)\n (888)\n   |\n  ===";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ymir):Form(ymir)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	setTarget(ymir.getTarget());
	setGrade(ymir.getGrade());
	setExec(ymir.getExec());
	_tree = ymir.getTree();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) throw()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ymir)
{
	std::cout << "ShrubberyCreationForm copy assignement constructor called" << std::endl;
	setTarget(ymir.getTarget());
	setGrade(ymir.getGrade());
	setExec(ymir.getExec());
	_tree = ymir.getTree();
	return (*this);
}

std::string	ShrubberyCreationForm::getTree(void) const
{
	return (this->_tree);
}

void	ShrubberyCreationForm::execAction(void) const
{
	std::string	f = getTarget() + "_shrubbery";

	std::ofstream outfile;
	outfile.open(f.c_str(), std::ofstream::out | std::ofstream::app);
	outfile << _tree << std::endl;
	outfile.close();
}

std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm& prez)
{
	if (prez.getStatus() == true)
		os << "The " << prez.getTarget() << " ShrubberyCreationForm is signed, we need a " << prez.getExec() << " bureaucrat to execute it";
	else
		os << "The " << prez.getTarget() << " ShrubberyCreationForm isn't signed, we need a " << prez.getGrade() << " bureaucrat to sign it";
	return (os);
}
