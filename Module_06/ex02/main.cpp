# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <exception>
# include <cstdlib>

Base*	generate(void)
{
	int	i;
	Base*	basee = NULL;

	srand(time(0));
	i = (int)rand() % 3;
	if (i == 1)
		basee = new A;
	else if (i == 2)
		basee = new B;
	else
		basee = new C;
	return (basee);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "It is a type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "It is a type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "It is a type C" << std::endl;
	else
		std::cout << "It is neither A nor B nor C object" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A&	a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "It is a type A" << std::endl;
		return ;
	}
	catch (std::exception& e)
	{
		(void)e;
	}
	try
	{
		B&	b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "It is a type B" << std::endl;
		return ;
	}
	catch (std::exception& e)
	{
		(void)e;
	}
	try
	{
		C&	c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "It is a type C" << std::endl;
		return ;
	}
	catch (std::exception& e)
	{
		(void)e;
	}
}

int	main(void)
{
	Base*	one = generate();

	identify(one);
	identify(*one);
	delete one;
	return (0);
}
