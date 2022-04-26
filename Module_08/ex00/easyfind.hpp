# ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <string>
# include <exception>
# include <iterator>
# include <vector>
# include <iomanip>
# include <deque>
# include <list>

template <typename T>
typename T::iterator	easyfind(T& sequence, int n)
{
	typename T::iterator it;
	for(it = sequence.begin(); it != sequence.end(); it++)
	{
		if (*it == n)
			break;
	}
	if (it == sequence.end())
		throw std::out_of_range("NOT FIND");
	else
		std::cout << "FIND : " << n << std::endl;
	return (it);
}
#endif
