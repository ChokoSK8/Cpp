/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:43:12 by abrun             #+#    #+#             */
/*   Updated: 2022/02/22 17:07:47 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Brain.hpp"

Brain::Brain(void)
{
	int		c = -1;
	std::string	id = "nervs_";
	std::stringstream	sstream;
	std::string	n;

	std::cout << "Brain default constructor called" << std::endl;
	while (++c < 100)
	{
		sstream << c;
		n = sstream.str();
		this->_ideas[c] = id + n;
	}
}

Brain::Brain(std::string ideas)
{
	int	c = -1;
	std::stringstream	sstream;
	std::string	n;

	std::cout << "Brain setAttribute constructor called" << std::endl;
	while (++c < 100)
	{
		sstream << c;
		n = sstream.str();
		this->_ideas[c] = ideas + n;
	}
}

Brain::Brain(const Brain& ymir)
{
	int	c = -1;

	std::cout << "Brain copy constructor called" << std::endl;
	while (++c < 100)
		this->_ideas[c] = ymir.getIdeas(c);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	Brain::operator=(const Brain& braini)
{
	int	c = -1;

	std::cout << "Brain copy assignment constructor called" << std::endl;
	while (++c < 100)
		this->_ideas[c] = braini.getIdeas(c);
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

std::string	Brain::getIdeas(int n) const
{
	return (this->_ideas[n]);
}
