/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:43:12 by abrun             #+#    #+#             */
/*   Updated: 2022/02/23 14:55:54 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Brain.hpp"

Brain::Brain(void)
{
	int		c = -1;

	std::cout << "Brain default constructor called" << std::endl;
	this->_ideas = new std::string[100];
	while (++c < 100)
		this->_ideas[c] = "nerv";
}

Brain::Brain(std::string id)
{
	int		c = -1;

	std::cout << "Brain setIdeas constructor called" << std::endl;
	this->_ideas = new std::string[100];
	while (++c < 100)
		this->_ideas[c] = id;
}

Brain::Brain(const Brain& ymir)
{
	int	c = -1;

	std::cout << "Brain copy constructor called" << std::endl;
	this->_ideas = new std::string[100];
	while (++c < 100)
		this->_ideas[c] = ymir.getIdeas(c);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	delete [] _ideas;
}

Brain&	Brain::operator=(const Brain& braini)
{
	int	c = -1;

	std::cout << "Brain copy assignment constructor called" << std::endl;

	delete [] this->_ideas;

	this->_ideas = new std::string[100];
	while (++c < 100)
		this->_ideas[c] = braini._ideas[c];
	return (*this);
}

void	Brain::displayIdeas(void) const
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

void	Brain::setIdeas(int n, std::string id)
{
	if (this->_ideas)
		this->_ideas[n] = id;
}

std::string	Brain::getIdeas(int n) const
{
	return (this->_ideas[n]);
}
