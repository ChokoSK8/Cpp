# include <iostream>
# include <sstream>
# include <string>
# include <limits>
# include "Convertor.hpp"
# define SUCCESS 1
# define ERROR 0

std::string	checkIfInt(std::string arg)
{
	long long int	n;

	if (arg.find_first_not_of("0123456789-+") == std::string::npos)
	{
		std::stringstream(arg) >> n;
		if (n <= std::numeric_limits<int>::max()
			&& n >= std::numeric_limits<int>::min())
			return ("int");
	}
	return ("");
}

std::string	checkIfDouble(std::string arg)
{
	size_t	pos;
	size_t	wit;
	size_t	sign;
	long double	n;

	if (arg == "nan" || arg == "-inf" || arg == "inf" || arg == "+inf")
		return ("doubleSpe");
	if (arg.find_first_of("0123456789") == std::string::npos)
		return ("");
	sign = arg.find_first_not_of("+-");
	pos = arg.find_first_of(".");
	wit = arg.find_first_not_of("0123456789", sign);
	if (pos != wit)
		return ("");
	if (pos == std::string::npos)
		pos = 0;
	if (arg.find_first_not_of("0123456789", pos + (pos || sign ? 1 : 0)) == std::string::npos)
	{
		std::stringstream(arg) >> n;
		if (n <= std::numeric_limits<double>::max()
			&& n >= -1.79769e+308) 
			return ("double");
	}
	return ("");
}

std::string	checkIfFloat(std::string arg)
{
	size_t	pos;
	size_t	wit;
	size_t	sign;
	long long	n;

	if (arg == "nanf" || arg == "-inff" || arg == "inff" || arg == "+inff")
		return ("floatSpe");
	if (arg.find_first_of("0123456789") == std::string::npos)
		return ("");
	sign = arg.find_first_not_of("+-");
	pos = arg.find_first_of(".");
	wit = arg.find_first_not_of("0123456789", sign);
	if (arg.find_first_of(".f") != wit)
		return ("");
	else if (pos == std::string::npos)
		pos = 0;
	if (arg.find_first_not_of("0123456789", pos + (pos || sign ? 1 : 0)) == arg.length() - 1
		&& arg.find_first_of("f") == arg.length() - 1)
	{
		std::stringstream(arg) >> n;
		if (n <= std::numeric_limits<float>::max()
			&& n >= -1.17549e+38)
			return ("float");
	}
	return ("");
}

std::string	checkIfChar(std::string arg)
{
	int	n;

	if (arg.length() != 1)
		return ("");
	std::stringstream(arg) >> n;
	if (n >= 0 && n <= 127)
		return ("char");
	return ("");
}

std::string	getConvertedType(std::string arg)
{
	std::string	type;

	type = checkIfInt(arg);
	if (!type.length())
		type = checkIfChar(arg);
	if (!type.length())
		type = checkIfDouble(arg);
	if (!type.length())
		type = checkIfFloat(arg);
	if (!type.length())
		type = "none";
	return (type);
}

int	main(int ac, char **av)
{
	std::string	type;

	if (ac != 2)
		return (1);
	type = getConvertedType(std::string(av[1]));
	std::cout << "Type : " + type << std::endl;
	Convertor	*conv = new Convertor(type, std::string(av[1]));
	std::cout << *conv << std::endl;
	delete conv;
	return (0);
}
