#ifndef SPAN_HPP
# define SPAN_HPP
# include <string>
# include <iostream>
# include <exception>

class	Span
{
	private:
		unsigned int		_size;
		const unsigned int	_maxSize;
		const int		_tab[_maxSize];

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

		class	SizeTooSmall : virtual public exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream& operator<<(std::ostream&, const Span&);
#endif
