#ifndef SPAN_HPP
# define SPAN_HPP
# include <string>
# include <iostream>
# include <exception>
# include <limits>
# include <vector>

class	Span
{
	private:
		unsigned int	_size;
		unsigned int	_maxSize;
		std::vector<int>	_tab;

	public:
		Span(void);
		Span(unsigned int);
		Span(const Span&);
		~Span(void);
		Span &operator=(const Span&);
		void	addNumber(unsigned int);
		unsigned int	getSize(void) const;
		unsigned int	getMaxSize(void) const;
		std::vector<int>	getTab(void) const;
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		class	SizeTooSmall : virtual public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream& operator<<(std::ostream&, const Span&);
unsigned int	ft_min(unsigned int a, unsigned int b);
unsigned int	dist(int a, int b);
#endif
