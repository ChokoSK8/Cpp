# include <iostream>
# include <string>

template <typename T>
void	iter(T* tab, int size, void (*fct)(T const&));
