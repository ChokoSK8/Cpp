/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:43:12 by abrun             #+#    #+#             */
/*   Updated: 2021/12/01 15:05:25 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	int	c = -1;

	std::cout << "Brain default constructor called" << std::endl;
	this->_ideas = new std::string[100];
	while (++c < 100)
		this->_ideas[c] = "nervs_" + std::to_string(c + 1);
}

Brain::Brain(std::string ideas)
{
	int	c = -1;

	std::cout << "Brain setAttribute constructor called" << std::endl;
	this->_ideas = new std::string[100];
	while (++c < 100)
		this->_ideas[c] = ideas + std::to_string(c + 1);
}

Brain&	Brain::operator=(const Brain& braini)
{
	int	c = -1;

	std::cout << "Brain copy constructor called" << std::endl;
	while (++c < 100)
		this->_ideas[c] = braini._ideas[c];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	delete [] this->_ideas;
}

void	Brain::display_ideas(void) const
{
	int	c = -1;

	while (++c < 100)
	{
		if (c < 99)
			std::cout << this->_ideas[c] << " : ";
		else
			std::cout << this->_ideas[c] << std::endl;
	}
}
