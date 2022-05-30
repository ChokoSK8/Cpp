# include "iter.h"

template <typename T>
void	display(T str)
{
	std::cout << str << std::endl;
}

template <typename T>
void	iter(T* tab, int size, void (*fct)(T))
{
	for (int i = 0; i < size; i++)
		fct(tab[i]);
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
