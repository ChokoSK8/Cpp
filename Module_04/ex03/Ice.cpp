/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:33:39 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 13:04:40 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void):AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "   * shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}

Ice*	Ice::clone(void) const
{
	std::cout << "Ice clone constructor called" << std::endl;
	return (new Ice(*this));
}
