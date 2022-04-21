#include "Convert.hpp"

Convert::Convert(void)
{
	std::cout << "Convert default constructor called" << std::endl;
}

Convert::Convert(const Convert& ymir)
{
	std::cout << "Convert copy constructor called" << std::endl;
}

Convert::~Convert(void)
{
	std::cout << "Convert destructor called" << std::endl;
}

Convert&	Convert::operator=(const Convert& ymir)
{
	std::cout << " r8 copy assignement constructor called" << std::endl;
}