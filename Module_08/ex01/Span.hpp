#ifndef SPAN_HPP
# define SPAN_HPP
# include <string>
# include <iostream>
# include <exception>
# include <limits>

class	Span
{
	private:
		unsigned int		_size;
		const unsigned int	_maxSize;
		const int*		_tab;

	public:
		Span(void);
		Span(unsigned int);
		Span(const Span&);
		~Span(void);
		Span &operator=(const Span&);
		void	addNumber(unsigned int);
		unsigned int	size(void) const;
		unsigned int	maxSize(void) const;
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		class	SizeTooSmall : virtual public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream& operator<<(std::ostream&, const Span&);

unsigned int	min(unsigned int a, unsigned int b)
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
#endif
