# include "Span.hpp"

int main()
{
	Span sp = Span(10000);
	for(int i = 0; i < 10000; i++)
		sp.addNumber(i);
	sp.addNumber(5);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}
