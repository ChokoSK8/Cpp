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
	else if (_type == "char")
		fillToChar(arg);
	else if (_type == "double" || _type == "doubleSpe")
		fillToDouble(arg);
	else if (_type == "float" || _type == "floatSpe")
		fillToFloat(arg);
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

int	Convertor::getToInt(void) const
{
	return (_toInt);
}

void	Convertor::setToInt(int toInt)
{
	_toInt = toInt;
}

double	Convertor::getToDouble(void) const
{
	return (_toDouble);
}

void	Convertor::setToDouble(double toDouble)
{
	_toDouble = toDouble;
}

float	Convertor::getToFloat(void) const
{
	return (_toFloat);
}

void	Convertor::setToFloat(float toFloat)
{
	_toFloat = toFloat;
}

char	Convertor::getToChar(void) const
{
	return (_toChar);
}

void	Convertor::setToChar(char toChar)
{
	_toChar = toChar;
}

void	Convertor::fillToInt(std::string arg)
{
	std::stringstream(arg) >> _toInt;
	_toChar = static_cast<int>(_toInt);
	_toFloat = static_cast<float>(_toInt);
	_toDouble = static_cast<double>(_toInt);
}

void	Convertor::fillToChar(std::string arg)
{
	_toChar = static_cast<char>(arg[0]);
	_toInt = static_cast<int>(_toChar + 48);
	_toFloat = static_cast<float>(_toChar + 48);
	_toDouble = static_cast<float>(_toChar + 48);
}

void	Convertor::fillToDouble(std::string arg)
{
	if (arg == "nan")
		_toDouble = std::numeric_limits<double>::quiet_NaN();
	else if (arg == "+inff" || arg == "-inff")
		_toFloat = std::numeric_limits<float>::infinity();
	else
		std::stringstream(arg) >> _toDouble;
	_toChar = static_cast<char>(_toDouble);
	_toInt = static_cast<int>(_toDouble);
	_toFloat = static_cast<float>(_toDouble);
}

void	Convertor::fillToFloat(std::string arg)
{
	if (arg == "nanf")
		_toFloat = std::numeric_limits<float>::quiet_NaN();
	else if (arg == "+inff" || arg == "-inff")
		_toFloat = std::numeric_limits<float>::infinity();
	else
		std::stringstream(arg) >> _toFloat;
	_toChar = static_cast<char>(_toFloat);
	_toInt = static_cast<int>(_toFloat);
	_toDouble = static_cast<double>(_toFloat);
}

std::ostream&	operator<<(std::ostream& os, const Convertor& conv)
{
	int	a;
	std::string	type;

	type = conv.getType();
	if (type == "none")
	{
		os << "char : undisplayable\nint : undisplayable\nfloat : undisplayable\ndouble : undisplayable";
		return (os);
	}
	a = conv.getToInt();
	os << "char : ";
	if (type == "char" || (a >= 32 && a <= 126))
		os << conv.getToChar();
	else if (type == "floatSpe" || type == "doubleSpe" || a < 0 || a > 127)
		os << "impossible";
	else
		os << "undisplayable";
	if (type == "floatSpe" || type == "doubleSpe")
		os << "\nint : impossible"; 
	else
		os <<  "\nint : " << conv.getToInt();
	if (conv.getType() == "int" || conv.getType() == "char")
		os <<  "\nfloat : " << conv.getToFloat() << ".0" << "f"
		<< "\ndouble : " << conv.getToDouble()  << ".0";
	else
		os <<  "\nfloat : " << conv.getToFloat()
		<< "f" << "\ndouble : " << conv.getToDouble();
	return (os);
}
