/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:31:52 by abrun             #+#    #+#             */
/*   Updated: 2022/03/07 12:06:44 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):Form("Request", 72)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	_target = "Request";
	_exec = 45;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 72)
{
	std::cout << "RobotomyRequestForm setParam constructor called" << std::endl;
	_target = target;
	_exec = 45;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rob):
		Form(rob)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	_target = "robot";
	_exec = 45;
}

RobotomyRequestForm::~RobotomyRequestForm(void) throw()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& ymir)
{
	std::cout << "RobotomyRequestForm copy assignement constructor called" << std::endl;
	_target = ymir.getTarget();
	_exec = ymir.getExec();
	_grade = ymir.getGrade();
	return (*this);
}

int	RobotomyRequestForm::checkExecGrade(int execGrade) const
{
	if (execGrade < _exec)
		return (1);
	return (0);
}

void	RobotomyRequestForm::execAction(void) const
{
	int	i;
	time_t	t;

	time(&t);
	i = (int)difftime(t, 0) % 2;
	if (i)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "The robotomisation of " << _target << " has failed" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const RobotomyRequestForm& prez)
{
	if (prez.getStatus() == true)
		os << "The " << prez.getTarget() << " RobotomyRequestForm is signed, we need a " << prez.getExec() << " bureaucrat to execute it";
	else
		os << "The " << prez.getTarget() << " RobotomyRequestForm isn't signed, we need a " << prez.getGrade() << " bureaucrat to sign it";
	return (os);
}
