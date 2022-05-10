/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:18:05 by abrun             #+#    #+#             */
/*   Updated: 2022/05/10 12:10:25 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Burn")
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name)
{
	std::cout << "Bureaucrat setParam constructor called" << std::endl;
	try
	{
		_grade = grade;
		checkGrade();
	}
	catch (std::exception const& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& ymir):_name(ymir.getName())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	try
	{
		_grade = ymir.getGrade();
		checkGrade();
	}
	catch (std::exception const& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(void) throw()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& ymir)
{
	std::cout << "Bureaucrat copy assignment constructor called" << std::endl;
	Bureaucrat	*n = new Bureaucrat(ymir);
	try
	{
		n->checkGrade();
	}
	catch (std::exception const& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
	return (*n);
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
	if (_grade > 1)
		_grade--;
	else
		std::cout << getName() << " cannot be inscrease" << std::endl;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (_grade < 150)
		_grade++;
	else
		std::cout << getName() << " cannot be decrease" << std::endl;
}

void	Bureaucrat::checkGrade(void) const
{
	if (_grade < 0)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

int	Bureaucrat::signForm(Form& formo) const
{
	try
	{
		checkGrade();
		formo.checkSignature();
		canHeSigns(formo);
		std::cout << getName() << " signed " << formo.getName() << std::endl;
			formo.toSign();
	}
	catch (std::exception const& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
	return (1);
}

void	Bureaucrat::canHeSigns(const Form& formo) const
{
 	if (this->_grade > formo.getGrade())
 		throw GradeTooLowException();
}
 
void	Bureaucrat::canHeExecute(const Form& formo) const
{
 	if (this->_grade > formo.getExec())
 		throw GradeTooLowException();
}
 
void	Bureaucrat::executeForm(const Form& formo)
{
 	try
 	{
 		formo.checkSignature();
 		checkGrade();
 		canHeExecute(formo);
 		formo.execAction();
 		std::cout << getName() << " execute " << formo.getName() << std::endl;
 	}
 	catch (std::exception& e)
 	{
 		std::cout << "ERREUR : " << e.what() << std::endl;
 	}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat&	crat)
{
	os << crat.getName() << ", bureaucrat grade " << crat.getGrade();
	return (os);
}
