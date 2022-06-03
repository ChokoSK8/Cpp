#include "Span.hpp"

Span::Span(void) : _size(0), _maxSize(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(int n) : _size(0)
{
	if (n < 0)
		_maxSize = 0;
	else
		_maxSize = n;
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

void	Span::addNumber(int n)
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

void	Span::addNumbers(int n)
{
	try
	{
		if (n <= 0)
			throw std::out_of_range("YOU'HE ENTERED A NEGATIVE PARAMETER");
		if (_size + n > _maxSize)
			throw std::out_of_range("YOU CAN'T ADD NUMBERS ANYMORE");
		srand(time(NULL));
		for (int j = 0; j < n; j++) 
			addNumber(rand());
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
	Span	copy(*this);

	if (_size < 2)
		throw SizeTooSmall();
	std::sort (copy._tab.begin(), copy._tab.end());
	copy.displaySpan();
	for(std::vector<int>::iterator it = copy._tab.begin(); it < copy._tab.end() - 1; it++)
	{
		diff = dist(*it, *(it + 1));
		shortest = ft_min(shortest, diff);
	}
	return (shortest);
}

unsigned int	Span::longestSpan(void)
{
	Span	copy(*this);

	if (_size < 2)
		throw SizeTooSmall();
	std::sort (copy._tab.begin(), copy._tab.end());
	return (*(copy._tab.end() - 1) - *(copy._tab.begin()));
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

void	Span::displaySpan(void) const
{
	std::cout << "myvector contains:";
  	for (std::vector<int>::const_iterator it=_tab.begin(); it!=_tab.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
}
