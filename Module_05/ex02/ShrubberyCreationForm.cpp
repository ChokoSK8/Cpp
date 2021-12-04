/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:36:29 by abrun             #+#    #+#             */
/*   Updated: 2021/12/04 17:39:48 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(Form const& formo)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	_target = formo;
	_exec = 137;
	_sign = 145;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) throw()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::checkExecGrade(int execGrade) const
{
	if (execGrade < _exec)
		return (1);
	return (0);
}
