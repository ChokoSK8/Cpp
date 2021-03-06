/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:18:05 by abrun             #+#    #+#             */
/*   Updated: 2022/05/10 11:57:31 by abrun            ###   ########.fr       */
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

void	Bureaucrat::checkGrade(void)
{
	if (_grade < 0)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

int	Bureaucrat::signForm(Form& formo) const
{
 	int	crat_grade;
 	int	formo_grade;
 
 	crat_grade = getGrade();
 	formo_grade = getGrade();
 	if (crat_grade < 1 || crat_grade > 150)
 	{
 		std::cout << getName() << " cannot sign because "
 			<< formo.getName() << "'s grade isn't valided" << std::endl;
 		return (0);
 	}
 	else if (formo.getStatus())
 	{
		std::cout << getName() << " cannot sign because the form is already signed"
 			<< std::endl;
 		return (0);
 	}
 	else if (crat_grade < formo_grade)
 	{
 		std::cout << getName() << " cannot sign because his grade is too low"
 			<< std::endl;
 		throw Form::GradeTooLowException();
 	}
 	std::cout << getName() << " signs " << formo.getName() << std::endl;
	return (1);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat&	crat)
{
	os << crat.getName() << ", bureaucrat grade " << crat.getGrade();
	return (os);
}
