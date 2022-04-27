#include "MutantStack.hpp"

MutantStack::MutantStack(void)
{
	std::cout << "MutantStack default constructor called" << std::endl;
}

MutantStack::MutantStack(const MutantStack& ymir)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
}

MutantStack::~MutantStack(void)
{
	std::cout << "MutantStack destructor called" << std::endl;
}

MutantStack&	MutantStack::operator=(const MutantStack& ymir)
{
	std::cout << "MutantStack copy assignement constructor called" << std::endl;
}