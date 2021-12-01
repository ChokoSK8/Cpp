/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:33:39 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 17:42:30 by abrun            ###   ########.fr       */
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

void	Ice::use(ICharactere& target)
{
	std::cout << "   * shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}
