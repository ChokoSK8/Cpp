#include "Span.hpp"

Span::Span(void) : _size(0), _maxSize(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _size(0), _maxSize(n)
{
	std::cout << "Span setParam constructor called" << std::endl;
}

Span::Span(const Span& ymir) : _size(ymir.size()), _maxSize(ymir.MaxSize())
{
	std::cout << "Span copy constructor called" << std::endl;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

Span&	Span::operator=(const Span& ymir) : _size(ymir.size()), _maxSize(ymir.MaxSize())
{
	std::cout << "Span copy assignement constructor called" << std::endl;
}

unsigned int	Span::size(void) const
{
	return (_size);
}

unsigned int	Span::maxSize(void) const
{
	return (_maxSize);
}

void	Span::addNumber(unsigned int n)
{
	try
	{
		if (_size == _maxSize)
			throw std::out_of_range("YOU CAN'T ADD NUMBERS ANYMORE");
		_tab[_size] = n;
		_size++;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	shortest;

	try
	{
		if (_size < 2)
			throw SizeTooSmall();
		Span	tmp = *this;
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
}

const char*	Span::SizeTooSmall::what(void) const throw()
{
	return ("The size is too small to compare size");
}
