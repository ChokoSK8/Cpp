/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:57:30 by abrun             #+#    #+#             */
/*   Updated: 2022/04/21 13:24:13 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	std::cout << "Form default constructor called" <<std::endl;
	_name = "Form";
	_grade = 150;
	_signed = false;
	_maxGrade = 150;
	_minGrade = 0;
	_target = "target";
	_exec = 150;
}

Form::Form(std::string name, int grade)
{
	std::cout << "Form setParam constructor called" <<std::endl;
	try
	{
		_name = name;
		_grade = grade;
		_signed = false;
		_maxGrade = 150;
		_minGrade = 0;
		_target = "target";
		_exec = 150;
		check_grade();
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
}

Form::Form(const Form& ymir)
{
	std::cout << "Form copy constructor called" <<std::endl;
	try
	{
		_name= ymir.getName();
		_grade = ymir.getGrade();
		_signed = ymir.getStatus();
		_maxGrade = ymir.getMaxGrade();
		_minGrade = ymir.getMinGrade();
		_target = ymir.getTarget();
		_exec = ymir.getExec();
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

Form&	Form::operator=(const Form& ymir)
{
	std::cout << "Form copy assignment constructor called" <<std::endl;
	try
	{
		_name= ymir.getName();
		_grade = ymir.getGrade();
		_signed = ymir.getStatus();
		_maxGrade = ymir.getMaxGrade();
		_minGrade = ymir.getMinGrade();
		_target = ymir.getTarget();
		_exec = ymir.getExec();
		check_grade();
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
	return (*this);
}

std::string	Form::getName(void) const
{
	return (_name);
}

int	Form::getGrade(void) const
{
	return (_grade);
}

int	Form::getMaxGrade(void) const
{
	return (_maxGrade);
}

int	Form::getMinGrade(void) const
{
	return (_minGrade);
}

bool	Form::getStatus(void) const
{
	return (_signed);
}

int	Form::getExec(void) const
{
	return (_exec);
}

std::string	Form::getTarget(void) const
{
	return (_target);
}

void	Form::setName(std::string name)
{
	_name = name;
}

void	Form::setGrade(int grade)
{
	_grade = grade;
}

void	Form::setExec(int exec)
{
	_exec = exec;
}

void	Form::setTarget(std::string target)
{
	_target = target;
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
		executor.checkGrade();
		executor.canHeExecute(*this);
		std::cout << executor.getName() << " execute " << getTarget() << std::endl;
		execAction();
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

void	Form::toSign(void)
{
	this->_signed = true;
}

void	Form::checkSignature(void)
{
	if (_signed)
		throw Form::FormAlreadySigned();
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

const char*	Form::FormAlreadySigned::what(void) const throw()
{
	return ("Form : The formulary is already signed");
}

int	Form::checkExecGrade(int execGrade) const
{
	if (execGrade < _exec)
		return (1);
	return (0);
}

std::ostream&	operator<<(std::ostream& os, const Form& formo)
{
	os << formo.getName() << ", form grade " << formo.getGrade()
		<< ", signed : " << formo.getStatus();
	return os;
}
