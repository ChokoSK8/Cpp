/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:39:56 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 14:12:07 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
	int	c = -1;

	std::cout << "MateriaSource default constructor called" << std::endl;
	while (++c < 4)
		_available[c] = 0;
}

MateriaSource::~MateriaSource(void)
{
	int	c = -1;

	std::cout << "MateriaSource destructor called" << std::endl;
	while (++c < 4)
	{
		if(_available[c])
			delete _list[c];
	}
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	int	c = -1;

	while (++c < 4)
	{
		if (!_available[c])
		{
			_list[c] = materia;
			_available[c] = 1;
			c = 4;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	if (type == "ice")
	{
		return (new Ice());
	}
	else if (type == "cure")
	{
		return (new Cure());
	}
	else
		return (0);
}
