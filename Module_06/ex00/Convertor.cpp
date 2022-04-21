#include "Convertor.hpp"

Convertor::Convertor(void)
{
	std::cout << "Convertor default constructor called" << std::endl;
}

Convertor::Convertor(std::string type, std::string arg)
{
	std::cout << "Convertor setParam constructor called" << std::endl;
	_type = type;
	if (_type == "int")
		fillToInt(arg);
/*	else if (_type == "char")
		fillToChar(arg);
	else if (_type == "float")
		fillToFloat(arg);
	else if (_type == "double")
		fillToDouble(arg);*/
	else
		_undisplayable = true;
}

Convertor::Convertor(const Convertor& ymir)
{
	std::cout << "Convertor copy constructor called" << std::endl;
	_type = ymir.getType();
}

Convertor::~Convertor(void)
{
	std::cout << "Convertor destructor called" << std::endl;
}

Convertor&	Convertor::operator=(const Convertor& ymir)
{
	std::cout << "Convertor copy assignement constructor called" << std::endl;
	_type = ymir.getType();
	return (*this);
}

std::string	Convertor::getType(void) const
{
	return (_type);
}

void	Convertor::setType(std::string type)
{
	_type = type;
}

void	Convertor::fillToInt(std::string arg)
{
	std::stringstream(arg) >> _toInt;
	_toChar = (char)_toInt;
	_toFloat = (float)_toInt;
	_toDouble = (double)_toInt;
}
