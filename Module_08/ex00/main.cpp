# include "easyfind.hpp"

int	main(void)
{
	std::deque<int>	vec;
	std::deque<int>::iterator	iter = vec.end(); 

	for(int i = 0; i < 5; i++)
		vec.push_back(i);
	try
	{
		iter = easyfind(vec, 3);
		iter = easyfind(vec, 4);
		iter = easyfind(vec, 5);
	}
	catch (std::out_of_range& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
