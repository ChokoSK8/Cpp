/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:57:30 by abrun             #+#    #+#             */
/*   Updated: 2021/12/04 17:36:06 by abrun            ###   ########.fr       */
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
		_maxGrade = 150;
		_minGrade = 0;
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
	if (_grade < _minGrade)
		throw GradeTooHighException();
	else if (_grade > _maxGrade)
		throw GradeTooLowException();
}

void	Form::execute(Bureaucrat const& executor) const
{
	try
	{
		checkSignature();
		checkBureaucratGrade(executor);
		std::cout << "Form has been executed by " << executor.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
}

void	Form::checkSignature(void) const
{
	if (!_signed)
		throw FormIsntSigned();
}

void	Form::checkBureaucratGrade(Bureaucrat const& executor) const
{
	int	execGrade = executor.getGrade();

	if (execGrade < 0)
		throw Bureaucrat::GradeTooLowException();
	else if (execGrade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (!checkExecGrade(execGrade))
		throw Bureaucrat::GradeTooLowException();
}

int	Form::checkExecGrade(int execGrade) const
{
	return (checkExecGrade(execGrade));
}

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Form : The grade passed is too high");
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Form : The grade passed is too low");
}

const char*	Form::FormIsntSigned::what(void) const throw()
{
	return ("Form : The formulary isn't signed");
}

std::ostream&	operator<<(std::ostream& os, const Form& formo)
{
	os << formo.getName() << ", form grade " << formo.getGrade()
		<< ", signed : " << formo.getStatus();
	return os;
}
