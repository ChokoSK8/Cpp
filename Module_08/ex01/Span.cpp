#include "Span.hpp"

Span::Span(void) : _size(0), _maxSize(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _size(0), _maxSize(n)
{
	std::cout << "Span setParam constructor called" << std::endl;
}

Span::Span(const Span& ymir) : _size(ymir.getSize()), _maxSize(ymir.getMaxSize()),
		_tab(ymir.getTab())
{
	std::cout << "Span copy constructor called" << std::endl;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

Span&	Span::operator=(const Span& ymir)
{
	_size = ymir.getSize();
	_maxSize = ymir.getMaxSize();
	_tab = ymir.getTab();
	std::cout << "Span copy assignement constructor called" << std::endl;
	return (*this);
}

unsigned int	Span::getSize(void) const
{
	return (_size);
}

unsigned int	Span::getMaxSize(void) const
{
	return (_maxSize);
}

std::vector<int>	Span::getTab(void) const
{
	return (_tab);
}
void	Span::addNumber(unsigned int n)
{
	try
	{
		if (_size == _maxSize)
			throw std::out_of_range("YOU CAN'T ADD NUMBERS ANYMORE");
		std::vector<int>::iterator	it = _tab.begin() + _size;
		_tab.insert(it, n);
		_size++;
	}
	catch (std::exception& e)
	{
		std::cout << "ERROR : " << e.what() << std::endl;
	}
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	shortest = std::numeric_limits<unsigned int>::max();
	unsigned int	diff;

	try
	{
		if (_size < 2)
			throw SizeTooSmall();
		for(std::vector<int>::iterator it = _tab.begin(); it < _tab.end() - 1; it++)
		{
			for(std::vector<int>::iterator jt = it + 1; jt < _tab.end(); jt++)
			{
				diff = dist(*it, *jt);
				shortest = ft_min(shortest, diff);
			}
		}
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
	return (shortest);
}

unsigned int	Span::longestSpan(void)
{
	int	max = std::numeric_limits<int>::min();
	int	min = std::numeric_limits<int>::max();

	try
	{
		for(std::vector<int>::iterator it = _tab.begin(); it < _tab.end(); it++)
		{
			if (*it > max)
				max = *it;
			if (*it < min)
				min = *it;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
	return (max - min);
}

const char*	Span::SizeTooSmall::what(void) const throw()
{
	return ("The size is too small to compare size");
}

unsigned int	ft_min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}

unsigned int	dist(int a, int b)
{
	int	dist;
	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	dist = a - b;
	if (dist < 0)
		return (-dist);
	return (dist);
}
