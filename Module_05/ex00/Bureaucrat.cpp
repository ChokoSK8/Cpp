/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:18:05 by abrun             #+#    #+#             */
/*   Updated: 2021/12/03 11:57:40 by abrun            ###   ########.fr       */
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

const char*	Bureaucrat::GradeTooHighException(void) const throw()
{
	return ("The grade passed is too high");
}

std::exception	Bureaucrat::GradeTooLowException(void) const throw()
{
	std::exception	e;
	const	char	msg[] = "The grade passed is too low";

	&msg[0] << e.what();
	return (e);
}

const std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int		Bureaucrat::getGrade(void) const
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
	std::exception	e;

	if (_grade < 0)
		e.what() = GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	else
		return ;
	throw e;
}
