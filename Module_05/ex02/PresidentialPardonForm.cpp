/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:37:50 by abrun             #+#    #+#             */
/*   Updated: 2022/03/07 11:14:31 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):Form("Pardon", 25)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	_target = "Pardon";
	_exec = 5;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target, 25)
{
	std::cout << "PresidentialPardonForm setParam constructor called" << std::endl;
	_target = target;
	_exec = 5;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ymir):Form(ymir)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) throw()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ymir)
{
	std::cout << "PresidentialPardonForm copy assignement constructor called" << std::endl;
	_target = ymir.getTarget();
	_exec = ymir.getExec();
	_grade = ymir.getGrade();
	return (*this);
}

int	PresidentialPardonForm::checkExecGrade(int execGrade) const
{
	if (execGrade <= _exec)
		return (1);
	return (0);
}

void	PresidentialPardonForm::execAction(void) const
{
	std::cout << _target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm& prez)
{
	if (prez.getStatus() == true)
		os << "The " << prez.getTarget() << " PresidentialPardonForm is signed, we need a " << prez.getExec() << " bureaucrat to execute it";
	else
		os << "The " << prez.getTarget() << " PresidentialPardonForm isn't signed, we need a " << prez.getGrade() << " bureaucrat to sign it";
	return (os);
}
