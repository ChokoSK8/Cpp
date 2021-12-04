/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:31:52 by abrun             #+#    #+#             */
/*   Updated: 2021/12/04 17:39:24 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(Form const& formo)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	_target = formo;
	_exec = 45;
	_sign = 72;
}

RobotomyRequestForm::~RobotomyRequestForm(void) throw()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::checkExecGrade(int execGrade) const
{
	if (execGrade < _exec)
		return (1);
	return (0);
}
