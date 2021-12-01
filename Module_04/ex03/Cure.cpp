/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:37:48 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 17:42:40 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void):AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

void	Cure::use(ICharactere& target)
{
	std::cout << "   * heals " << target.getName()
		<< "'s wounds *" << std::endl;
}
