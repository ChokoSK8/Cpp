#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <string>
# include <iostream>
# include <stack>
# include <iterator>
# include <vector>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:
		typedef typename std::vector<T>::iterator	iterator;

	public:
		MutantStack(void);
	//	MutantStack(const MutantStack&);
		~MutantStack(void);
	//	MutantStack &operator=(const MutantStack&);
		MutantStack::iterator	begin(void);
};

template <typename T>
MutantStack<T>::MutantStack(void)
{
	std::cout << "MutantStack default constructor called" << std::endl;
}

/*template <typename T>
MutantStack<T>::MutantStack(const MutantStack& ymir)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
}*/

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	std::cout << "MutantStack destructor called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return ();
}

/*template <typename T>
MutantStack<T>&	MutantStack::operator=(const MutantStack& ymir)
{
	std::cout << "MutantStack copy assignement constructor called" << std::endl;
}*/
#endif
