/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:57:30 by abrun             #+#    #+#             */
/*   Updated: 2021/12/03 19:13:10 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade)
{
	std::cout << "Form setParam constructor called" <<std::endl;
	try
	{
		_name= name;
		_grade = grade;
		_signed = false;
		check_grade();
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
}

Form::~Form(void) throw()
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	Form::getName(void) const
{
	return (_name);
}

int	Form::getGrade(void) const
{
	return (_grade);
}

bool	Form::getStatus(void) const
{
	return (_signed);
}

void	Form::beSigned(Bureaucrat &crat)
{
	try
	{
		if (crat.signForm(*this))
			_signed = true;
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
}

void	Form::check_grade(void)
{
	if (_grade < 0)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Form : The grade passed is too high");
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Form : The grade passed is too low");
}

std::ostream&	operator<<(std::ostream& os, const Form& formo)
{
	os << formo.getName() << ", form grade " << formo.getGrade()
		<< ", signed : " << formo.getStatus();
	return os;
}
