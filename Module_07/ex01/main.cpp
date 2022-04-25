# include "iter.h"

void	display(std::string str)
{
	std::cout << str << std::endl;
}

int	main(void)
{
	size_t	size = 10;
	std::string tab[10] = {"Albatross", "Auklet",
                              "Bluebird", "Blackbird",
                              "Cowbird", "Dove",
                              "Duck", "Godwit",
                              "Gull", "Hawk"};
	iter(tab, size, display);
	return (0);
}
