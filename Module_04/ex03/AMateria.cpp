/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:28:57 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 14:54:56 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const& type)
{
	std::cout << "AMateria default constructor called" << std::endl;
	this->_type = type;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

void	AMateria::use(ICharacter& target)
{
	this->use(target);
}

std::string const&	AMateria::getType() const
{
	return (this->_type);
}
