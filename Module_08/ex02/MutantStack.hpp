#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <string>
# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack(void);
	//	MutantStack(const MutantStack&);
		~MutantStack(void);
	//	MutantStack &operator=(const MutantStack&);

	class Iterator
	{
		private:
			pointer	
		Iterator(void);
	//	Iterator(const Iterator&);
		~Iterator(void);
	//	Iterator &operator=(const Iterator&);
	};
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

/*template <typename T>
MutantStack<T>&	MutantStack::operator=(const MutantStack& ymir)
{
	std::cout << "MutantStack copy assignement constructor called" << std::endl;
}*/

template <typename T>
std::ostream& operator<<(std::ostream&, const MutantStack<T>&);
#endif
