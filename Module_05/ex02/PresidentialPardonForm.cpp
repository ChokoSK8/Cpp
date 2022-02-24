/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:37:50 by abrun             #+#    #+#             */
/*   Updated: 2022/02/24 16:57:30 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"
# include <cstdlib>
# include <ctime>

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target, 25)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	_target = target;
	_exec = 5;
}

PresidentialPardonForm::~PresidentialPardonForm(void) throw()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
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
