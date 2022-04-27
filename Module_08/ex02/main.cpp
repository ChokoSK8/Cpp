# include "MutantStack.hpp"

int	main(void)
{
	MutantStack<std::string>	stk;

	stk.push("Hello");
	stk.push("World");
	stk.push("War");
	while (!stk.empty())
	{
		std::cout << stk.top() << std::endl;
		std::cout << stk.size() << std::endl;
		stk.pop();
	}
	return (0);
}
