# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <typeinfo>

Base*	generate(void)
{
	int	i;
	time_t	t;
	Base*	basee = NULL;

	time(&t);
	i = (int)difftime(t, 0) % 3;
	if (i == 1)
		basee = new A;
	else if (i == 1)
		basee = new B;
	else
		basee = new C;
	return (basee);
}

void	identify(Base& p)
{
	if (std::typeid(p) == (std::typeid(A))
		std::cout << "It is a type A" << std::endl;
	else if (std::typeid(p) == (std::typeid(B)))
		std::cout << "It is a type B" << std::endl;
	else if (std::typeid(p) == (std::typeid(C)))
		std::cout << "It is a type C" << std::endl;
	else
		std::cout << "It isn't any of type A, B or C" << std::endl;
}

int	main(void)
{
	Base*	one = generate();

	identify(*one);
	return (0);
}
