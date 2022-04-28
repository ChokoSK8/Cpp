#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <string>
# include <iostream>
# include <deque>
# include <stack>

template<typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator	iterator;
		iterator	begin(void)
		{
			return (this->c.begin());
		};
		iterator	end(void)
		{
			return (this->c.end());
		};
};
#endif
