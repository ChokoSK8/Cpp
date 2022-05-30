# include "point.h"

template <typename T>
void	swap(T& a, T& b)
{
	T	c;

	c = a;
	a = b;
	b = c;
};

template <typename T>
T	min(T& a, T& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T	max(T& a, T& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

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
