# include "point.h"

int	main(void)
{
	int	a = 5;
	int	b = 10;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "-------SWAP------" << std::endl;
	::swap(a, b);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "-------MIN-------" << std::endl;
	std::cout << ::min(a, b) << std::endl;
	std::cout << "-------MAX-------" << std::endl;
	std::cout << ::max(a, b) << std::endl;
	return (0);
}
