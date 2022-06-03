# include "Span.hpp"

# define len -222222
int main()
{
	Span sp = Span(len);

	srand(time(NULL));
	for(int i = 0; i < len - 6; i++)
		sp.addNumber(rand() % 50);
	sp.displaySpan();
	sp.addNumbers(2);
	sp.displaySpan();
	sp.addNumbers(2);
	sp.displaySpan();
	sp.addNumbers(2);
	sp.displaySpan();
	sp.addNumber(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "ERREUR : " << e.what() << std::endl;
	}
	sp.displaySpan();
	return (0);
}
