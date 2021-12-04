/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:36:29 by abrun             #+#    #+#             */
/*   Updated: 2021/12/04 18:23:59 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	_target = target;
	_exec = 137;
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
