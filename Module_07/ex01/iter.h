# include <iostream>
# include <string>

template <typename A, typename B, typename C>
void	iter(A* tab, B size, C fct)
{
	for (B i = 0; i < size; i++)
		fct(tab[i]);
}
