/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:18:05 by abrun             #+#    #+#             */
/*   Updated: 2021/12/03 16:15:46 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade)
{
	try
	{
		_name = name;
		_grade = grade;
		checkGrade();
	}
	catch (std::exception const& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(void) throw()
{
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("The grade passed is too high");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("The grade passed is too low");
}

const std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::increaseGrade(void)
{
	_grade++;
}

void	Bureaucrat::decreaseGrade(void)
{
	_grade--;
}

void	Bureaucrat::checkGrade(void)
{
	if (_grade < 0)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat&	crat)
{
	os << crat.getName() << ", bureaucrat grade " << crat.getGrade();
	return (os);
}
