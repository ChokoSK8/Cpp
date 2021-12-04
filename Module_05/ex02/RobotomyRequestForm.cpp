/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:31:52 by abrun             #+#    #+#             */
/*   Updated: 2021/12/04 18:24:16 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 72)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	_target = target;
	_exec = 45;
}

RobotomyRequestForm::~RobotomyRequestForm(void) throw()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

int	RobotomyRequestForm::checkExecGrade(int execGrade) const
{
	if (execGrade < _exec)
		return (1);
	return (0);
}
