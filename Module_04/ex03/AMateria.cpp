/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:28:57 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 17:42:18 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const& type)
{
	std::cout << "AMateria default constructor called" << std::endl;
	this->_type = type;
}

void	AMateria::use(ICharacter& target)
{
	this->use(target);
}
